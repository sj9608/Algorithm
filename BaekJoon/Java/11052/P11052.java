import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] dp = new int[n + 1];

        for (int i = 1; i < n + 1; i++) {
            dp[i] = sc.nextInt();
        }

        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; i - j > 0; j++) {
                int compare = dp[j] + dp[i - j];
                
                dp[i] = Math.max(dp[i], compare);
            }
        }

        System.out.println(dp[n]);
    }
}
