#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int max = 0;
    int input[1001] = {};
    double result = 0;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
        if (input[i] > max) max = input[i];
        result += input[i];
    }
    result = ((result / max) * 100) / n;
    printf("%f", result);

    return 0;
}