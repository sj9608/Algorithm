#include <iostream>
using namespace std;

int main(void)
{
    int A;
    cin >> A;

    if(90<= A && A <= 100)
        cout << 'A';
    else if(80 <= A && A < 90)
        cout << 'B';
    else if(70 <= A && A < 80)
        cout << 'C';
    else if(60 <= A && A < 70)
        cout << 'D';
    else cout << 'F';
    
    return 0;
}