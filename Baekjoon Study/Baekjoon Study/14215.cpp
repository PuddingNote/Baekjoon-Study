#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	// a, b, c 오름차순 정렬
	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);

	if (a + b > c)
	{
		cout << a + b + c << '\n';
	}
	else
	{
		cout << (a + b) * 2 - 1 << '\n';
	}

	// cout << ((a + b > c) ? (a + b + c) : (a + b) * 2 - 1) << '\n';

	return 0;
}