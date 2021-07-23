#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct User
{
    int age;
    char name[101];
};

// 레퍼런스로 매개변수 넘겨주기, 또 const 잊지말것.
bool ft_compare_strcut(const User &p1, const User &p2)
{
    return p1.age < p2.age;
}

int main(void)
{
    int N;

    cin >> N;
    User *user = (User *)malloc(sizeof(User) * N);

    for (int i = 0; i < N; i++)
    {
        cin >> user[i].age >> user[i].name;
    }

    stable_sort(user, user+ N, ft_compare_strcut);
    for (int i = 0; i < N; i++)
    {
        cout << user[i].age << ' ' <<  user[i].name << '\n';
    }
    return 0;
}