#include <iostream>
using namespace std;

int main()
{
	int a1, a0, c, n0; 

	cin >> a1 >> a0 >> c >> n0;

	if ((a1 - c) * n0 + a0 <= 0 && (a1 <= c))
	{
		cout << 1 << '\n';
	}
	else
	{
		cout << 0 << '\n';
	}

	return 0;
}