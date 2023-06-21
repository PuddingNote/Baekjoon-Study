#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (M >= 45 && M <= 59)
	{
		cout << H << " " << M - 45 << '\n';
	}
	else if (M >= 0 && M <= 44)
	{
		if (H == 0)
		{
			cout << H + 23 << " " << M + 15 << '\n';
		}
		else
		{
			cout << H - 1 << " " << M + 15 << '\n';
		}
	}

	return 0;
}