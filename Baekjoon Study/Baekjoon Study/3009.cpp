#include <iostream>
#include <algorithm>
using namespace std;

struct Point 
{
	int x, y;
};

int main()
{
	Point p1, p2, p3, p4;

	cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y; // (5,5), (5,7), (7,5)

    if (p1.x > p2.x) swap(p1.x, p2.x);
    if (p1.x > p3.x) swap(p1.x, p3.x);
    if (p2.x > p3.x) swap(p2.x, p3.x);

    if (p1.y > p2.y) swap(p1.y, p2.y);
    if (p1.y > p3.y) swap(p1.y, p3.y);
    if (p2.y > p3.y) swap(p2.y, p3.y);

    p4.x = p1.x + p3.x - p2.x;
    p4.y = p1.y + p3.y - p2.y;

    cout << p4.x << " " << p4.y << endl;

	return 0;
}