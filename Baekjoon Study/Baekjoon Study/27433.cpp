#include <iostream>
using namespace std;

long long fact(int a)	// N이 20일때 int의 범위를 넘어섬
{
	if (a == 0)
	{
		return 1;
	}
	return a * fact(a - 1);
}

int main()
{
	int N;
	cin >> N;

	if (N >= 0 && N <= 20)
	{
		cout << fact(N) << '\n';
	}

	return 0;
}