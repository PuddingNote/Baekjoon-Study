#include <iostream>
using namespace std;

int main()
{
	int N;
	int so = 2;

	cin >> N;

	while (N != 1)
	{
		if (N % so == 0)
		{
			N = N / so;
			cout << so << endl;
		}
		else so++;
	}

	return 0;
}