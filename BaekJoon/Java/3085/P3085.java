import java.util.Scanner;

public class P3085 {
    static int max;
    static int boardSize;
    static char[][] board;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        boardSize = sc.nextInt();
        board = new char[boardSize][boardSize];

        for (int i = 0; i < boardSize; i++) {
            String line = sc.next();
            for (int j = 0; j < boardSize; j++) {
                board[i][j] = line.charAt(j);
            }
        }

        // 가로인접행렬 바꾸고 체크
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize - 1; j++) {
                char temp = board[i][j];
                board[i][j] = board[i][j + 1];
                board[i][j + 1] = temp;

                boardCheck();

                // 원복
                temp = board[i][j];
                board[i][j] = board[i][j + 1];
                board[i][j + 1] = temp;
            }
        }

        // 세로 인접행렬 바꾸고 체크
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize - 1; j++) {
                char temp = board[j][i];
                board[j][i] = board[j + 1][i];
                board[j + 1][i] = temp;

                boardCheck();

                // 원복
                temp = board[j][i];
                board[j][i] = board[j + 1][i];
                board[j + 1][i] = temp;
            }
        }

        System.out.println(max);
    }

    public static void boardCheck() {

        // 가로 체크
        for (int i = 0; i < boardSize; i++) {
            int count = 1;
            for (int j = 0; j < boardSize - 1; j++) {
                if (board[i][j] == board[i][j + 1]) {
                    count++;
                }
                else {
                    count = 1;
                }
                max = count > max ? count : max;
            }
        }

        // 세로 체크
        for (int i = 0; i < boardSize; i++) {
            int count = 1;
            for (int j = 0; j < boardSize - 1; j++) {
                if (board[j][i] == board[j + 1][i]) {
                    count++;
                }
                else {
                    count = 1;
                }
                max = count > max ? count : max;
            }
        }
    }
}
