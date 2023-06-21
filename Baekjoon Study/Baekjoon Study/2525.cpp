#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	int count = 0;

	cin >> A >> B >> C;

	if (B + C <= 59)
	{
		cout << A << " " << B + C << '\n';
	}
	else if (B + C >= 60)
	{
		count = (B + C) / 60;

		if (A + count > 23)
		{
			cout << A + count - 24 << " " << (B + C) % 60 << '\n';
		}
		else
		{
			cout << A + count << " " << (B + C) % 60 << '\n';
		}
	}

	return 0;
}