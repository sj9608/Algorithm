#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int *data;
    int _size;
    int top;

public:
    Stack(int Size = 10000)
    {
        _size = Size;
        data = new int[_size];
        top = -1;
    }
    ~Stack()
    {
        delete data;
    }
    void push(int x)
    {
        data[++top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << -1 << '\n';
            return;
        }
        cout << data[top] << '\n';
        top--;
    }
    void size()
    {
        cout << top + 1 << '\n';
    }
    void empty()
    {
        if (top == -1)
        {
            cout << 1 << '\n';
            return;
        }
        cout << 0 << '\n';
    }
    void Top()
    {
        if (top == -1)
        {
            cout << -1 << '\n';
            return;
        }
        cout << data[top] << '\n';
    }
};

int main(void)
{
    int n;
    string s;
    Stack st;

    cin >> n;
    
    while (n--)
    {
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (s == "top")
        {
            st.Top();
        }
        else if (s == "size")
        {
            st.size();
        }
        else if (s == "empty")
        {
            st.empty();
        }
        else if (s == "pop")
        {
            st.pop();
        }
    }
    return 0;
}