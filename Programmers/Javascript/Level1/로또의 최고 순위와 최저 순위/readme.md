# 로또의 최고 순위와 최저 순위



##### 입출력 예

| lottos                | win_nums                 | result |
| --------------------- | ------------------------ | ------ |
| [44, 1, 0, 0, 31, 25] | [31, 10, 45, 1, 6, 19]   | [3, 5] |
| [0, 0, 0, 0, 0, 0]    | [38, 19, 20, 40, 15, 25] | [1, 6] |
| [45, 4, 35, 20, 3, 9] | [20, 9, 3, 45, 4, 35]    | [1, 1] |



##### solution 1

정렬하고 binary search 이용해서 최저순위 판별하고 0개수 카운트해서 최고순위 판별하면 될 것 같다.



##### solution 2

다른 사람의 풀이를 봤는데 내가 javscript의 내장 함수들에 대한 지식이 많이 부족하다는 것을 깨달았다.

Array의 프로토타입 함수로 `filter(), include()` 를 이용해서 간단하게 해결 할 수 있는 문제였던 것 같다.

