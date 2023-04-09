#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, sum = 0;
	char arr[10000];

	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
		sum += arr[i] - '0'; // 아스키코드값 0 = 48, 1 = 49, 2 = 50
	}

	cout << sum;
}