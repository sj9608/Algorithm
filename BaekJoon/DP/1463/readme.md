# 1로 만들기

### 3가지 연산이 가능

1. n % 3 == 0 ->  n /= 3
2. n % 2 == 0 -> n /= 2
3. n -= 1

> 위 3가지 연산만 이용해서 n을 1로 만들 때 최소 횟수를 출력.

n은 홀수 or 짝수
1. 홀수 일 경우 3으로 나눠지면 나누고 아니면 -1 연산.
2. 짝수 일 경우 2로 나눠도 되지만 -1 연산을 하고 3으로 나눠도 되는 경우 있음.

---
n = 11일 경우 -1 연산 진행하면 10. -> 여기서 /2 or -1 연산 가능

최초 구현코드에서 생각안하고 구현해서 틀림.