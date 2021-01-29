
#include <iostream>
using namespace std;

int main(void)
{
    int c;
    cin >> c;

    int *arr = new int[sizeof(int) * c + 1];

    for(int i=0; i < c; i++)
    {
        cin >> arr[i];
    }

    return 0;
}

float newAvg()
{

}