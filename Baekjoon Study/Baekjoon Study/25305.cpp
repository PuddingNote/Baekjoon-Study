#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Descending(int x, int y)
{
	return x > y;
}

int main()
{
	int N, K;
	cin >> N >> K;

	if (N < 1 || N > 1000 || K < 1 || K > N) return 0;

	vector<int> v(N);
	int input;
	for (int i = 0; i < N; i++)
	{
		cin >> input;

		if (input >= 0 && input <= 10000)
		{
			v[i] = input;
		}
		else
		{
			i--;
		}

	}

	sort(v.begin(), v.end(), Descending);

	cout << v[K - 1] << '\n';

	return 0;
}