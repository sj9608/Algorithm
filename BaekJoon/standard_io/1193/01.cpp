#include <iostream>

using namespace std;

int main(void)
{
    int i, X;
    
    i = 1;
    cin >> X;
    while (X > i)
    {
        X -= i;
        i++;
    }
    
    if (i % 2 == 1)
        cout << i + 1 - X << '/' << X;
    else
        cout << X << '/' << i + 1 - X;
    
    return 0;
}