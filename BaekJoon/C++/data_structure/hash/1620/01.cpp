#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<string, int> ma;
int n, m;
string s[100001];

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        ma.insert(make_pair(s[i], i));
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (isdigit(s[0]))
        {
            int n = stoi(s);
            cout << s[n] << '\n';
        }
        else
        {
            cout << ma[s] << '\n';
        }
    }

    return 0;
}

