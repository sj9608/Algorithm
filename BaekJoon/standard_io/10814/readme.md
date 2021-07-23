우선 사람들 나이 이름을 구조체로 만들고 입력받고
나이순으로 정렬을 하면 되지않을까?

c++ 에서 구조체를 정렬하는 방법을 알아본 결과
STL (algorithm) 라이브러리에서 제공하는 sort를 이용한다.
다만 기존의 sort와 차이점은 비교함수를 직접 작성해야한다.

구조체 비교함수를 직접 작성하는 방법은 다음과 같다.
```C++
// const와  &를 통해서 레퍼런스로 받아오는걸 잊지말자!
// x순으로 정렬하고 x값이 같으면 y순으로 각각 오른차순으로 정렬
bool cmp(const Point &p1, const Point &p2){
    if(p1.x < p2.x){
        return true;
    }
    else if(p1.x == p2.x){
        return p1.y < p2.y;
    }
    else{
        return false;
    }
}
```
### 실수
이름이 100자 이하라고 했는데 구조체에 char name[100] 으로 선언해서 여러번 실패함.. 
101로 바꿔주니 성공

![image](https://user-images.githubusercontent.com/52594760/126727565-74a56f58-a9b8-498d-9fc7-5b317b5b9d7a.png)