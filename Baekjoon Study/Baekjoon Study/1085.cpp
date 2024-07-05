// #1
#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h;         // (x,y), (w,h)
    cin >> x >> y >> w >> h;

    int minDistance = x;
    if (y < minDistance) minDistance = y;
    if (w - x < minDistance) minDistance = w - x;
    if (h - y < minDistance) minDistance = h - y;

    cout << minDistance << '\n';

    return 0;
}

// #2
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x, y, w, h;         // (x,y), (w,h)

	cin >> x >> y >> w >> h;

	cout << min(min(x, y), min(w - x, h - y)) << '\n';

	return 0;
}