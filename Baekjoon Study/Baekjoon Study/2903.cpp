#include <iostream>
using namespace std;

int main()
{	
	int N;
	int dot = 2;

	cin >> N;
	
	while (N--)
	{
		dot += dot - 1;
	}

	dot *= dot;

	cout << dot << '\n';

	return 0;
}