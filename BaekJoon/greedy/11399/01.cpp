#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    // for (int i = n; i > 0; i--)
    //     for (int j = 0; j < i; j++)
    //         ans += v[j];
    for (int i = 0; i < n; i++)
        ans = ans + (v[i] * (n - i));
    
    cout << ans << endl;
    return 0;
}