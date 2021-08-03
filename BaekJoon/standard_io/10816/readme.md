선형 탐색은 시간초과가 뜸 (2중 반복문)

최대 50만개 입력, 검색 해야할 개수도 50만개

바이너리 서치로 하려고 했으나..

단순 바이너리 서치는 문제가 있다.

lowerbound, upperbound를 이용해야 한다고함.

> 기존코드 (시간초과)
``` c++
#include <iostream>
using namespace std;

int main(void)
{
    int n, m;

    // 상근이가 가지고있는 카드 개수 n
    cin >> n;
    int *cards = new int[n];
    for (int i = 0; i < n; i++)
        cin >> cards[i];

    cin >> m;
    int *cardAmt = new int[m]; // 세야할 카드
    int *rst = new int[m]; // 세야할 카드의 수량

    // 수량 초기화
    for (int i = 0; i < m; i++)
        rst[i] = 0;

    // 세야할 카드 입력
    for (int i = 0; i < m; i++)
        cin >> cardAmt[i];

    // 비교 및 수량증가
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (cardAmt[i] == cards[j])
                rst[i]++;

    // 출력
    for (int i = 0; i < m; i++)
        cout << rst[i] << ' ';

    return 0;
}
```

auto 키워드는 c++11 버전부터 사용할 수 있으며 함수나 값들의 반환값에 따라 자동으로 타입을 정해준다

upper_bound와 lower_bound는 2진 탐색의 변형이다. 

(v.begin(), v.end(), 찾을 값) 으로 사용한다.

반환값이 iterator 같은데

auto 형으로 받아서 두 값을 빼면 int형이 나온다..

iterator에 대한 학습이 부족하다.



