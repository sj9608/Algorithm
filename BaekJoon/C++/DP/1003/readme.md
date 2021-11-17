기존 피보나치 함수의 경우 아래와 같이 작성을 하는데 이 경우 한번 했던 계산을 여러번 반복하여 불필요한 연산이 많다는 문제가 있다.

```c++
int ft_fibo(int n)
{
    if (n < 1)
        return 0;
    else if (n == 1)
        return 1;
    else
        return ft_fibo(n - 1) + ft_fibo(n - 2);
}
```

따라서 한번 계산한 값들을 저장할 배열 dp를 선언하여 저장하고 필요할 경우 가져다 쓰는 방식으로 개선.

``` c++
int dp[50] = {0, 1}; // 0, 1 번 쨰 항은 미리 초기화 나머지는 0으로 초기화 (전역변수)

int ft_fibo(int n)
{
    if (n == 0 || n == 1) return dp[n]; // 0, 1일 경우 0, 1 반환
    else if (dp[n] == 0) dp[n] = ft_fibo(n - 1) + ft_fibo(n - 2); // 계산 안된 항일 경우 계산해서 값을 저장.
    return dp[n]; // 이미 계산된 항 or 계산을 진행한 항을 반환.
}

```