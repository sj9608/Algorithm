#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"};

int WB_cnt(string *board, int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i+x][j+y] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}

int BW_cnt(string *board, int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i+x][j+y] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}

int ft_getMin(int a, int b)
{
    return a < b ? a : b;
}

int main(void)
{
    int n, m;
    int tmp;
    int min;
    cin >> n >> m;
    min = 1234567;
    // 보드판 메모리 할당
    string *board = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            tmp = ft_getMin(WB_cnt(board, i, j), BW_cnt(board, i, j));
            if (tmp < min)
                min = tmp;
        }
    }
    cout << min;
    
    return 0;
}