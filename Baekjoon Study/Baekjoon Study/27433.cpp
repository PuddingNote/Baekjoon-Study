#include <iostream>
using namespace std;

long long fact(int a)	// N�� 20�϶� int�� ������ �Ѿ
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