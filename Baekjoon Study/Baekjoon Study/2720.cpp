#include <iostream>
using namespace std;

int main()
{
	int T, C;
	int Quarter, Dime, Nickel, Penny;

	cin >> T;

	while (T--)
	{
		cin >> C;

		Quarter = C / 25;
		C = C % 25;

		Dime = C / 10;
		C = C % 10;		

		Nickel = C / 5;
		C = C % 5;

		Penny = C;

		cout << Quarter << " " << Dime << " " << Nickel << " " << Penny << '\n';
	}

	return 0;
}