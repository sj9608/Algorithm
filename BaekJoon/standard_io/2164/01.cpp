#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    queue<int> que;

    for (int i = 0; i < N; i++)
        que.push(i+1);

    while (que.size() - 1)
    {
        que.pop();
        que.push(que.front());
        que.pop();
    }
    
    cout << que.front();

    return 0;
}