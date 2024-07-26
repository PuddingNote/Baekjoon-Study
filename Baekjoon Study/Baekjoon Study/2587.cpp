#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v(5);
	int input = 0, sum = 0, avg = 0, middle = 0;

	for (int i = 0; i < v.size(); i++)
	{
		cin >> input;

		if (input > 0 && input < 100 && input % 10 == 0)
		{
			v[i] = input;
			sum += v[i];
		}
		else
		{
			i--;
		}
	}

	sort(v.begin(), v.end());

	avg = sum / v.size();
	middle = v[v.size() / 2];

	cout << avg << '\n' << middle << '\n';

	return 0;
}

//#include <iostream>
//using namespace std;
//
//#define LENGTH 5
//
//int main()
//{
//	int arr[LENGTH];
//	int sum = 0, avg = 0;
//
//	for (int i = 0; i < LENGTH; i++)
//	{
//		cin >> arr[i];
//		sum += arr[i];
//	}
//
//	for (int i = 1; i < LENGTH; i++)	// »ðÀÔÁ¤·Ä
//	{
//		int temp = arr[i];
//		int prev = i - 1;
//		while ((prev >= 0) && (arr[prev] > temp)) 
//		{
//			arr[prev + 1] = arr[prev];
//			prev--;
//		}
//		arr[prev + 1] = temp;
//	}
//
//	avg = sum / LENGTH;
//
//	cout << avg << '\n' << arr[2] << '\n';
//
//	return 0;
//}