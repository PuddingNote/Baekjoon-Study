#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		arr[i] = input;
	}

	deque<int> deque;
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		if (arr[i] == 0)
		{
			deque.push_front(input);
		}
	}

	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int input;
		cin >> input;

		deque.push_back(input);
	}

	for (int i = 0; i < M; i++)
	{
		cout << deque[i] << " ";
	}

	return 0;
}