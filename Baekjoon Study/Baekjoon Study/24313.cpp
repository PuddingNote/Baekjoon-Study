#include <iostream>

using namespace std;

int main()
{
	// ��� n >= n0�� ���Ͽ� f(n) <= c * g(n)�� �����Ѵٸ� 1, �������� �ʴٸ� 0

	int a1, a0, c, n0; 
	cin >> a1 >> a0 >> c >> n0;

	if ((a1 * n0 + a0 <= c * n0) && (c - a1 >= 0))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}

	return 0;
}