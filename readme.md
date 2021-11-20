# Algorithm

📂 BaekJoon  : 언어별 백준 알고리즘 문제 풀이\
⌊ 📂 language\
  ├ 📁 DP : Dynamic Programming\
  ├ 📁 standard_io : 표준 입출력 문제\
  ├ 📁 BFS : 너비 우선 탐색 문제\
  ├ 📁 DFS : 깊이 우선 탐색 문제\
  ⌊ 📁 etc : 분류, 나머지

📂 DataStructure : 언어별로 자료구조 구현\
⌊ 📂 language\
  ├ 📁 Stack\
  ├ 📁 Heap\
  ⌊ 📁 LinkedList\
   
   
📂 Programmers : 레벨/언어별 프로그래머스 알고리즘 문제 풀이\
⌊ 📂 Level\
  ⌊ 📂 language\
  
  
📝 skeleton.cpp : c++ 세팅

📝 skeleton.c : c 세팅

### C++ 입출력 속도 가속시키기

```c++
std::ios_base::sync_with_stdio(0);
```

#### 사용이유
c++에서 표준 입력으로 이용하는게 cin 인데 cin이 다른 입력방법 (scnaf, get)에 비해 상대적으로 느리다.

이유는 cpp의 iostream의 buffer와 c의 stdio buffer와 동기화 시켜주므로 2개의 버퍼사용으로 속도가 저하된다는 것이다.

하지만 std::ios_base::sync_with_stdio(false);를 사용하므로서 동기화를 끊으면 c++만의 독립적인 버퍼를 생성하게 되고 c의 버퍼들과는 병행하여 사용할 수 없게 된다. 대신 속도는 높아지는 원리이다.

여기서 주의점이 있다. std::ios_base::sync_with_stdio(false);를 사용한다 하더라도 std::cout<<std::endl;를 사용하는 경우이다.

std::cout << "\n"; 과 std::cout << std::endl은 20배 이상으로 속도차이가 난다고 한다. 

즉, 코드에 std::endl;를 남발해버리면 std::ios_base::sync_with_stdio(false);를 사용한 효과가 미미해 질 수 있다.

결론!  C++에서 수행시간을 줄이려면 std::ios_base::sync_with_stdio(false);와 std::cout << "\n"를 사용하자.

[출처](https://shjz.tistory.com/31)
