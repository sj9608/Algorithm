#include <iostream>
using namespace std;

int dp[1001] = { 0, 1, 2 };

int main(void)
{
    int n;
    cin >> n;

    for (int i = 3; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2] ) % 10007;

    cout << dp[n] << '\n';
    return 0;
}