#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int N, M;

    cin >> N;
    int *answer = (int *)malloc(sizeof(int) * N);
    
    // 정답배열 입력
    for (int i = 0; i < N; i++)
        cin >> answer[i];

    cin >> M;
    int *input = (int *)malloc(sizeof(int) * M);
    
    // 비교배열 입력
    for (int i = 0; i < M; i++)
        cin >> input[i];

    // answer 배열 정렬 
    sort(answer, answer + N);

    for (int i = 0; i < M; i++)
    {
        cout << binary_search(answer, answer + N, input[i]) << '\n';
    }

    return 0;
}