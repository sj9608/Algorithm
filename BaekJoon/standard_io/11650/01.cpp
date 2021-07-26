#include <iostream>
#include <algorithm>

using namespace std;

struct Point {
	int x;
	int y;
};

bool ft_compare(const Point& p1, const Point& p2)
{
	if (p1.x < p2.x)
		return 1;
	else
	{
		if (p1.x == p2.x)
			return 1;
		return 0;
	}
}

int main(void)
{
	int N;
	
	cin >> N;

	Point* p = (Point*)malloc(sizeof(Point) * N);
	for (int i = 0; i < N; i++)
	{
		cin >> p[i].x >> p[i].y;
	}

	sort(p, p + N, ft_compare);

	for (int i = 0; i < N; i++)
		cout << p[i].x << ' ' << p[i].y << '\n';
	
	return 0;
}
