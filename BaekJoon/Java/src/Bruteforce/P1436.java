package Bruteforce;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P1436 {
    public static void main(String[] args) throws IOException {
        /*
            1   666
            2   1666
            3   2666
            4   3666
            5   4666
            6   5666
            7   6660
            8   6661
            9   6662
            10  6663
            11  6664
            12  6665
            13  6666
            14  6667
            15  6668
            16  6669
            17  7666
            18  8666
            19  9666
            20  10666
            21  11666
            22  12666
            23  13666
            24  14666
            25  15666
            26  16660
            26  16661
         */
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        solution(N);
    }

    private static void solution(int n) {
        int count = 0;
        int num = 666;

        // 666부터 숫자를 하나씩 올려가면서 666이 포함되있으면 count 를 올려서 n번 째로 큰 수를 찾는다.
        while (count < n) {
            if (Integer.toString(num).contains("666")) {
                count++;
            }
            num++;
        }

        System.out.printf("%d", num - 1);
    }
}
