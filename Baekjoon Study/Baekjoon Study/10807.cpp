#include <iostream>
using namespace std;

int main()
{
	int N;
	int arr[100];
	int v;
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cin >> v;

	for (int i = 0; i < N; i++)
	{
		if (v == arr[i]) count++;
	}

	cout << count << endl;

	return 0;
}