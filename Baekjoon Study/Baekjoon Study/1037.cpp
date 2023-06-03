#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	int input;

	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	cout << v[0] * v[N - 1] << '\n';

	return 0;
}