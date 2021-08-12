#include <iostream>
#define MIN(A, B) ((A) < (B) ? (A) : (B))
using namespace std;

int make_1(int n)
{
    int cnt = 0;
    while (true)
    {
        if (n <= 1)
            break;
        if (n % 2 == 0)
        {
            n /= 2;
            cnt++;
        }
        else if (n % 3 == 0)
        {
            n /= 3;
            cnt++;
        }
        else
        {
            n -= 1;
            cnt++;
        }
    }
    return cnt;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    cin >> n;
    cout << make_1(n);

    return 0;
}