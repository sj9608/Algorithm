#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int m, n;
    
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];    

    sort(v.begin(), v.end());

    cin >> m;
    int *num = new int[m];

    for (int i = 0; i < m; i++)
        cin >> num[i];

    for (int i = 0; i < m; i++)
    {
        auto l = lower_bound(v.begin(), v.end(), num[i]);
        auto r = upper_bound(v.begin(), v.end(), num[i]);
        cout << r - l << " ";
    }

    return 0;
}