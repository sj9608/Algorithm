#include <iostream>
using namespace std;

int main(void)
{
    int c, a, b;
    cin >> c;
    for(int i=0; i<c; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}