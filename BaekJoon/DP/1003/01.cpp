#include <iostream>

using namespace std;

int ft_fibonacci(int n, int n_1, int n_2)
{
    if (n == -1)
        return 1;
    else if (n < 1)
        return 0;
    else if (n == 1)
        return n_2;
    return ft_fibonacci(n - 1, n_2, n_1 + n_2);
}

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ft_fibonacci(n - 1, 0, 1) << " " << ft_fibonacci(n, 0, 1) << "\n";
    }
    return 0;
}