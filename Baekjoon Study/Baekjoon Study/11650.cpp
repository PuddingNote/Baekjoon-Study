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
	if (p1.x > p2.x)
	{
		return false;
	}
	else if (p1.x == p2.x && p1.y > p2.y)
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
	//Point* p = new Point[N];
	vector<Point> v(N);

	for (int i = 0; i < N; i++)
	{
		//cin >> p[i].x >> p[i].y;
		cin >> v[i].x >> v[i].y;
	}

	//sort(p, p + N, comparePoints);
	sort(v.begin(), v.end(), comparePoints);

	for (int i = 0; i < N; i++)
	{
		//cout << p[i].x << " " << p[i].y << '\n';	// endl써서 시간초과 떴었음
		cout << v[i].x << " " << v[i].y << '\n'; 
	}

	return 0;
}