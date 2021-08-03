#include <iostream>

#define TSUM(A, B, C) A + B + C;

using namespace std;

int main(void)
{
    int a, b, c;
    int n, m;
    int sum = 0;
    int max = 0;

    // 첫 줄에 n, m 입력
    cin >> n >> m;

    int *input = new int[n];
    // 두번 째 줄에 n개의 수 입력
    for (int i = 0; i < n; i++)
        cin >> input[i];
    
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                a = input[i];
                b = input[j];
                c = input[k];
                sum = TSUM(a, b, c);
                if (sum <= m && sum > max)
                    max = sum;
            }
        }
    }
    cout << max << '\n';
    return 0;
}