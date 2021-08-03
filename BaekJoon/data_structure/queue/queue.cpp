
#include <iostream>

using namespace std;

template <typename T>
class Queue
{
private:
    T *data;
    int size;
    int front;
    int rear;

public:
    Queue(int sz = 10000)
    {
        data = new T[sz];
        size = sz;
        front = rear = 0;
    }
    ~Queue()
    {
        delete[] data;
    }

    // push X: 정수 X를 큐에 넣는 연산이다.
    void Push(T x)
    {
        data[rear] = x;
        rear++;
    }

    // pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    void Pop()
    {
        if (front == rear)
        {
            cout << -1 << '\n';
            return;
        }
        cout << data[front++] << '\n';
    }

    // size: 큐에 들어있는 정수의 개수를 출력한다.
    void Size()
    {
        if (front == rear)
        {
            cout << "0\n";
            return;
        }
        cout << rear - front << "\n";
    }
    // empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
    void isEmpty()
    {
        if (front == rear)
        {
            cout << 1 << '\n';
            return;
        }
        cout << 0 << '\n';
    }
    // front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    void Front()
    {
        if (front == rear)
        {
            cout << -1 << '\n';
            return;
        }
        cout << data[front] << '\n';
    }
    // back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
    void Back()
    {
        if (front == rear)
        {
            cout << -1 << '\n';
            return;
        }
        cout << data[rear-1] << '\n';
    }
};

int main(void)
{
    int n;
    cin >> n;
    Queue<int> q;

    while (n--)
    {
        string s;
        cin >> s;

        if (s == "push")
        {
            int x;
            cin >> x;
            q.Push(x);
        }
        else if (s == "pop")
            q.Pop();
        else if (s == "size")
            q.Size();
        else if (s == "empty")
            q.isEmpty();
        else if (s == "front")
            q.Front();
        else if (s == "back")
            q.Back();
    }
    return 0;
}