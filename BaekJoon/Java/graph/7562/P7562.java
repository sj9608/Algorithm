private static int[][] board;
private static Queue<Point> que = new LinkedList<>();
private static int boardSize;
private static boolean[][] visited;
private static int[] x = {-2, -1, 1, 2, 2, 1, -1, -2};
private static int[] y = {1, 2, 2, 1, -1, -2, -2, -1};
private static int count = 0;

public static int solution(Point current, Point destination) {
  int newX = 0;
  int newY = 0;
  visited[current.x][current.y] = true;
  que.offer(current);

  while (!que.isEmpty()) {
    Point curPosition = que.poll();
    if (curPosition.equals(destination)) {
      return board[curPosition.x][curPosition.y];
    }
    for (int i = 0; i < 8; i++) {
      ewX = curPosition.x + x[i];
      newY = curPosition.y + y[i];

      if (0 <= newX && newX < boardSize && 0 <= newY && newY < boardSize) {
        if (visited[newX][newY] == false) {
          visited[newX][newY] = true;
          que.offer(new Point(newX, newY));
          count = board[curPosition.x][curPosition.y] + 1;
          board[newX][newY] = count;
        }
      }
    }
  }

  return -1;
}


public static void main(String[] args) throws IOException {
  BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

  int t = Integer.parseInt(br.readLine());

  // 테스트케이스 횟수만큼 실행
  for (int i = 0; i < t; i++) {
    // board 크기 입력받기
    boardSize = Integer.parseInt(br.readLine());
    board = new int[301][301];
    visited = new boolean[301][301];

    // 현재 좌표 입력받아서 Point 객체 생성하기
    String[] line1 = br.readLine().split(" ");
    int x1 = Integer.parseInt(line1[0]);
    int y1 = Integer.parseInt(line1[1]);
    Point current = new Point(x1, y1);

    // 목적지 좌표 입력받아서 Point 객체 생성하기
    String[] line2 = br.readLine().split(" ");
    int x2 = Integer.parseInt(line2[0]);
    int y2 = Integer.parseInt(line2[1]);
    Point destination = new Point(x2, y2);

    // solution 함수에 값 보내주고 출력 받기
    System.out.println(solution(current, destination));
  }
}
