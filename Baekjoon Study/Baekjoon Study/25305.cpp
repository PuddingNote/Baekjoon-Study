#include <iostream>
using namespace std;

int main()
{
	int N, K;
	
	cin >> N >> K;

	if (K < 1 || K > N) return 0;

	int arr[1000];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < N; i++)	// »ğÀÔÁ¤·Ä
	{
		int temp = arr[i];
		int prev = i - 1;
		while ((prev >= 0) && (arr[prev] > temp))
		{
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev + 1] = temp;
	}

	int cut = 0;

	cut = arr[N - K];

	cout << cut << endl;

	return 0;
}