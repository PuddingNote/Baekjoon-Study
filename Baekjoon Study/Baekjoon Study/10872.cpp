#include <iostream>
using namespace std;

int fact(int num)
{
	if (num >= 1) return num * fact(num - 1);
	else return 1;
}

int main()
{
	int N;
	cin >> N;

	cout << fact(N);

	return 0;
}