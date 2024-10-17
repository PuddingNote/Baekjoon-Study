#include <iostream>
#include <cmath>
using namespace std;

void printStars(int N, int x, int y)
{
	if (N == 1)
	{
		cout << "*";
		return;
	}

	int div = N / 3;
	if ((x / div) % 3 == 1 && (y / div) % 3 == 1)
	{
		cout << " ";
	}
	else
	{
		printStars(div, x, y);
	}
}

int main()
{
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printStars(N, i, j);
		}
		cout << '\n';
	}

	return 0;
}