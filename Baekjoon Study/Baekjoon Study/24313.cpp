#include <iostream>

using namespace std;

int main()
{
	// 모든 n >= n0에 대하여 f(n) <= c * g(n)가 성립한다면 1, 성립하지 않다면 0

	int a1, a0, c, n0; 
	cin >> a1 >> a0 >> c >> n0;

	if ((a1 * n0 + a0 <= c * n0) && (c - a1 >= 0))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}

	return 0;
}