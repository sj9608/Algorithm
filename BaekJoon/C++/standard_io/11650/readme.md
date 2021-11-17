이번문제는 저번에 풀었던 10814 번 나이순정렬을 풀 때 사용했던 구조체 정렬을 사용하면 좋을것 같다고 생각함.

결과는 성공

하지만 대부분의 사람들이 STL의 pair 를 이용해 푼듯하다. 아래는 해당 문법을 적용시킨 풀이이다.

```C++
#include <cstdio>
#include <utility>
#include <algorithm>

using namespace std;

int main(void)
{
    int n = 0;
    scanf"%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        pairs[i] = make_pair(a, b); // pair를 만드는 방식인듯. make_pair(first, second)
    }

    sort(pairs, pairs + n); // 정렬 알고리즘

    for (int i = 0; i < n; i++)
        printf("%d %d\n", pairs[i].first, pairs[i].second);

    return 0;
}
```

![image](https://user-images.githubusercontent.com/52594760/126920328-cf5617db-c59f-424e-a245-ceee37638998.png)
