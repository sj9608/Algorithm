#include <iostream>
using namespace std;

int main(void)
{
	string date[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int n[11] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int mon, day, dnum;

	dnum = 0;
	cin >> mon >> day;
	for (int i = 0; i < mon - 1; i++)
		dnum += n[i];
	dnum += day;
	cout << date[dnum % 7] << '\n';

	return (0);
}

// int main(void)
// {
// 	int mon, day, dnum;
// 	dnum = 0;
// 	cin >> mon >> day;
// 	if (mon == 1)
// 		dnum = day;
// 	else if (mon == 2)
// 		dnum = 31 + day;
// 	else if (mon == 3)
// 		dnum = 31 + 28 + day;
// 	else if (mon == 4)
// 		dnum = 31 + 28 + 31 + day;
// 	else if (mon == 5)
// 		dnum = 31 + 28 + 31 + 30 + day;
// 	else if (mon == 6)
// 		dnum = 31 + 28 + 31 + 30 + 31 + day;
// 	else if (mon == 7)
// 		dnum = 31 + 28 + 31 + 30 + 31 + 30 + day;
// 	else if (mon == 8)
// 		dnum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
// 	else if (mon == 9)
// 		dnum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
// 	else if (mon == 10)
// 		dnum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
// 	else if (mon == 11)
// 		dnum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
// 	else if (mon == 12)
// 		dnum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
// 	cout << date[dnum % 7] << '\n';
// 	return (0);
// }
