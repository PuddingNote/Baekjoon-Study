#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int K;
	cin >> K;
	while (K--)
	{
		int N;
		cin >> N;
		if (N == 0)
		{
			s.pop();
		}
		else
		{
			s.push(N);
		}
	}

	int count = 0;
	while (!s.empty())
	{
		count += s.top();
		s.pop();
	}

	cout << count << '\n';

	return 0;
}