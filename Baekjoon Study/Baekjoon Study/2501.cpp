#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K;
	vector<int> v;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			v.push_back(i);
		}
	}

	cout << v[K - 1] << endl;

	return 0;
}