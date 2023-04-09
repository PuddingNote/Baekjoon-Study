#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	
	while (1)
	{
		cin >> N;
		if (N % 2 != 0) break;
	}
	
	int arr[500000];
	int sum = 0;
	int count[8001] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

		sum += arr[i];
		count[arr[i] + 4000]++;
	}

	sort(arr, arr + N);

	int avg = 0; // 산술평균
	int middle = 0; // 중앙값
	int second = 0; // 최빈값
	int range = 0; // 범위

	avg = round((double)sum / N); // 반올림
	middle = arr[(N - 1) / 2];

	int temp = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (count[i] > temp)
		{
			temp = count[i];
			second = i;
		}
	}
	for (int i = second + 1; i < 8001; i++)
	{
		if (count[i] == temp)
		{
			second = i;
			break;
		}
	}
	second -= 4000;
	range = arr[N - 1] - arr[0];

	cout << avg << '\n' << middle << '\n' << second << '\n' << range << '\n';

	return 0;
}