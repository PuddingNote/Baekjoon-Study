#include <iostream>
using namespace std;

int fibo(int num)
{
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else
		return fibo(num - 1) + fibo(num - 2);
}

int main()
{
	int N;
	cin >> N;

	cout << fibo(N);

	return 0;
}