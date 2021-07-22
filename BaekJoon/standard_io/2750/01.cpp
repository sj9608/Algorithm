#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    int *input;

    cin >> N;
    input = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        cin >> input[i];
    }

    sort(input,input + N);

    for (int i = 0; i < N; i++)
    {
        cout << input[i] << '\n';
    }
}