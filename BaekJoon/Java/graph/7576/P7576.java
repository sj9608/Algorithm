import java.awt.*;
import java.util.LinkedList;
import java.util.Scanner;

public class P7576 {
    static int[][] tomato;
    static int[] dx = {0, 1, 0, -1}; // 상하좌우 순서
    static int[] dy = {1, 0, -1, 0};
    static LinkedList<Point> que;
    static int n;
    static int m;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        m = sc.nextInt();
        n = sc.nextInt();

        tomato = new int[n][m];
        que = new LinkedList<>();

        // 토마토판 입력
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                tomato[i][j] = sc.nextInt();
                // 익은토마토는 큐에 넣어놓기
                if (tomato[i][j] == 1) {
                    que.add(new Point(i, j));
                }
            }
        }

        System.out.println(BFS());

        // 배열 정상입력확인
//        System.out.println("================ separator ================");
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                System.out.printf("%d ", tomato[i][j]);
//            }
//            System.out.println();
//        }
    }

    static int BFS() {
        while (!que.isEmpty()) {
            Point curPos = que.poll();

            for (int i = 0; i < 4; i++) {
                int nx = curPos.x + dx[i];
                int ny = curPos.y + dy[i];

                if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                    // 토마토가 안있었다?
                    if (tomato[nx][ny] == 0) {
                        que.add(new Point(nx, ny));

                        tomato[nx][ny] = tomato[curPos.x][curPos.y] + 1;
                    }
                }
            }
        }

        // 걸린일수
        int result = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tomato[i][j] == 0) {
                    return -1;
                }
                result = Math.max(result, tomato[i][j]);
            }
        }

        if (result == 1) {
            return 0;
        } else {
            return result - 1;
        }

    }
}
