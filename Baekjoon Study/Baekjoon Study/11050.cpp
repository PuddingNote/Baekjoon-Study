#include <iostream>

using namespace std;

int fact(int num)
{
	if (num == 1 || num == 0) 
	{
		return 1;
	}
	else 
	{
		return fact(num - 1) * num;
	}
}

int main()
{
	int N, K;
	int result;

	cin >> N >> K;

	result = fact(N) / (fact(K) * fact(N - K));

	cout << result << '\n';

	return 0;
}