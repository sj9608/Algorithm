괄호 짝 맞추기

처음 봤을때 '(' 개수와 ')'개수를 따로 세어서 ')'개수가 많거나 '('개수가 남으면 false로 생각하자 했는데

그냥 '(' 개수만 세고 ')'이 나오면 '(' 개수를 빼서 생각하자 해서 탄생한게 02.cpp

다른 사람들의 풀이를 보니 stack으로 처리함. 이번기회에 STL queue, stack등등 활용할 수 있을때 해보자 해서

stack으로도 구성해봄. '(' 나오면 push , ')' 나오면 pop 빈상태에서 pop하면 false 작업 다 끝나고 스택에 값들어있어도 false

![image](https://user-images.githubusercontent.com/52594760/127287240-8d6ccbc2-98b9-4a8b-b00b-31b02a8e7229.png)