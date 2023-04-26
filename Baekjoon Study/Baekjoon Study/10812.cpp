//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, M;
//	int i, j, k;
//	int temp;
//
//	cin >> N >> M;
//
//	int *arr = new int[N];
//	int *arrTemp = new int[N];
//
//	for (int x = 0; x < N; x++)
//	{
//		arr[x] = x + 1;
//	}
//
//	for (int x = 0; x < M; x++)
//	{
//		cin >> i >> j >> k;
//		temp = i;
//		
//		for (int y = 0; y < N; y++)
//		{
//			arrTemp[y] = arr[y];
//		}
//
//		for (int y = k; y < j; y++)
//		{
//			arr[temp - 1] = arr[y - 1];
//			temp++;
//		}
//		for (int y = i; y < k; y++)
//		{
//			arr[temp - 1] = arrTemp[y - 1];
//			temp++;
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	int i, j, k;
	cin >> N >> M;

	vector<int> v;

	for (int x = 0; x < N; x++)
	{
		v.push_back(x + 1);
	}

	while (M--)
	{
		cin >> i >> j >> k;

		rotate(v.begin() + (i - 1), v.begin() + (k - 1), v.begin() + j);
	}

	/*for (int x = 0; x < M; x++)
	{
		cin >> i >> j >> k;

		rotate(v.begin() + (i - 1), v.begin() + (k - 1), v.begin() + j);
	}*/

	for (int a : v)
	{
		cout << a << " ";
	}

	return 0;
}
