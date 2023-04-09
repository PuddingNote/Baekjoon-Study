#include <iostream>
using namespace std;

bool hansu(int num)
{
	int a, b, c; // ÀÚ¸´¼ö(1,2,3)

	if (num < 100)
	{
		return true;
	}

	a = num % 10;
	b = num % 100 / 10;
	c = num / 100;

	if (b - a == c - b)
	{
		return true;
	}
	return false;
}

int main()
{
	int N, cnt = 0;

	do
	{
		cin >> N;
	} while (N <= 0 || N > 1000);

	for (int i = 1; i <= N; i++)
	{
		if (hansu(i) == true)
		{
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}