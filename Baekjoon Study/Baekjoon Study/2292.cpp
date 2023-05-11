#include <iostream>

using namespace std;

int main()
{
	int N;
	int num = 1, i = 0;

	cin >> N;

	while (1)
	{
		if (N <= num) break;
		num += 6 * i;
		i++;
	}
	if (i == 0) i = 1;

	cout << i << endl;

	return 0;
}