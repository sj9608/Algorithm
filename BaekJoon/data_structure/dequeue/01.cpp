#include <iostream>

using namespace std;
// implementation Dequeue
template <typename T>
class Dequeue
{
private:
    T *data;
    int size;
    int front;
    int rear;
    int capacity;

public:
    Dequeue(int capacity = 10000)
    {
        this->capacity = capacity;
        data = new T[capacity];
        size = 0;
        front = -1;
        rear = 0;
    }

    ~Dequeue()
    {
        delete[] data;
    }

    void push_front(T x)
    {
        if (isFull())
            return;
        if (front == -1)
            front = rear = 0;
        else if (front == 0)
            front = capacity - 1;
        else
            front--;
        data[front] = x;
        size++;
    }

    void push_back(T x)
    {
        if (isFull())
            return;
        if (front == -1)
            front = rear = 0;
        else if (rear == capacity - 1)
            rear = 0;
        else
            rear++;
        data[rear] = x;
        size++;
    }

    T pop_front()
    {
        if (Empty())
            return -1;
        T temp = Front();
        if (front == capacity - 1)
            front = 0;
        else
            front++;
        size--;
        return temp;
    }

    T pop_back()
    {
        if (Empty())
            return -1;
        T temp = Back();
        if (rear == 0)
            rear = capacity - 1;
        else
            rear--;
        size--;
        return temp;
    }

    T Front()
    {
        return data[front];
    }

    T Back()
    {
        return data[rear];
    }

    int Size()
    {
        return size;
    }

    bool Empty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }
};

int main(void)
{
    Dequeue<int> dq;
    string cmd;
    int n;
    cin >> n;

    while (n--)
    {
        cin >> cmd;
        if (cmd == "push_back")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (cmd == "push_front")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (cmd == "pop_front")
        {
            cout << dq.pop_front() << endl;
        }
        else if (cmd == "pop_back")
        {
            cout << dq.pop_back() << endl;
        }
        else if (cmd == "front")
        {
            if (dq.Empty())
                cout << -1 << "\n";
            else
                cout << dq.Front() << endl;
        }
        else if (cmd == "back")
        {
            if (dq.Empty())
                cout << -1 << "\n";
            else
                cout << dq.Back() << endl;
        }
        else if (cmd == "size")
        {
            cout << dq.Size() << endl;
        }
        else if (cmd == "empty")
        {
            cout << dq.Empty() << endl;
        }
    }
    return 0;
}