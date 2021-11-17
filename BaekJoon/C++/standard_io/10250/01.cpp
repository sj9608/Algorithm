#include <iostream>

using namespace std;

int main(void)
{
    int t; // 테스트 데이터
    cin >> t;
    int h, w, n;
    int height;
    int width;

    while (t--)
    {
        cin >> h >> w >> n;
        height = n % h;
        width = n / h + 1;
        if (height == 0)
        {
            height = h;
            width -= 1;
        }
        cout << height * 100 + width << "\n";
    }

    return 0;
}