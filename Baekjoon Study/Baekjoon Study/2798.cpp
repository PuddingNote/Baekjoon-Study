#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	int sum = 0, result = 0;

	cin >> N >> M;

	vector<int> cards(N);

	for (int i = 0; i < N; i++)
	{
		cin >> cards[i];
	}

	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = cards[i] + cards[j] + cards[k];

				if (sum <= M && sum > result)
				{
					result = sum;
				}
			}
		}
	}

	cout << result << '\n';

	return 0;
}