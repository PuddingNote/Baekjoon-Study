#include <iostream>
using namespace std;

int change(int input)
{
	int temp[3] = { 0, };
	int send = 0;

	temp[0] = input / 100;
	temp[1] = (input % 100 - input % 10) / 10;
	temp[2] = input % 10;

	send = temp[0] + (temp[1] * 10) + (temp[2] * 100);

	return send;
}

int main()
{
	int A, B;

	cin >> A >> B;

	A = change(A);
	B = change(B);

	if (A > B)
	{
		cout << A << '\n';
	}
	else
	{
		cout << B << '\n';
	}

	return 0;
}