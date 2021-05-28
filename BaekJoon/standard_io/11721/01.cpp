#include <iostream>
using namespace std;

int main(void)
{
	int i = 0;

	char arr[100];
	cin >> arr;

	while (arr[i] != 0)
	{
		cout << arr[i++];
		if (i % 10 == 0)
			cout << '\n';
	}

	return (0);
}


// int main(void)
// {
// 	string str;
// 	int i = 0;

// 	cin >> str;

// 	while (1)
// 	{
// 		cout << str.substr(i, 10) << '\n'; // substr은 str문자열의 i번째 부터 n개의 문자열을 반환함.
// 		i += 10;
// 		if (i > str.length() - 1)
// 			break;
// 	}
// 	return (0);
// }
