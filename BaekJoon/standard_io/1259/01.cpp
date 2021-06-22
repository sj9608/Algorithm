#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{    
    string s;
    while(1)
    {
        cin >> s;
        string buf = s;
        reverse(s.begin(), s.end()); // 문자열 뒤집음
        if (s == "0") break;
        else if (buf == s) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}