#include <iostream>

using namespace std;

int main()
{
	int T, C;
	int Q, D, N, P;

	cin >> T;

	while (T--)
	{
		cin >> C;

		Q = C / 25;
		C = C % 25;

		D = C / 10;
		C = C % 10;		

		N = C / 5;
		C = C % 5;

		P = C;

		cout << Q << " " << D << " " << N << " " << P << endl;
	}

	return 0;
}