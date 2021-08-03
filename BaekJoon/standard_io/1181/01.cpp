#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ft_compare(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main(void)
{
    int n;
    cin >> n;
    string temp;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // sort string ordered by lenth
    sort(v.begin(), v.end(), ft_compare);

    // print vector , no duplicate
    for (int i = 0; i < n; i++)
    {
        if (temp == v[i]) continue;
        cout << v[i] << endl;
        temp = v[i];
    }

    return 0;
}