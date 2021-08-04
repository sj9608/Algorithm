#include <iostream>

using namespace std;

// factorial
int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int n, k;
    cin >> n >> k;

    // binomial coefficient
    // n! / k! * (n - k)!
    int binomial = factorial(n)/(factorial(k) * factorial(n - k));
    cout << binomial << '\n';
    
    return 0;
}