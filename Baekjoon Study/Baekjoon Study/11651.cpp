#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Point
{
	int x, y;
};

bool comparePoints(Point p1, Point p2)
{
	if (p1.y > p2.y)
	{
		return false;
	}
	else if (p1.y == p2.y && p1.x > p2.x)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int N;

	cin >> N;
	vector<Point> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i].x >> v[i].y;
	}

	sort(v.begin(), v.end(), comparePoints);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].x << " " << v[i].y << '\n';
	}

	return 0;
}