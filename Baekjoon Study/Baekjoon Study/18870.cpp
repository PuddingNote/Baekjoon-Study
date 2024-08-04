#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> x1(N);
	vector<int> x2(N);

	int input;
	for (int i = 0; i < N; i++)
	{
		cin >> input;

		x1[i] = input;
		x2[i] = input;
	}

	sort(x2.begin(), x2.end());	// unique함수 사용을 위해 정렬

	x2.erase(unique(x2.begin(), x2.end()), x2.end()); // 중복된 원소 제거

	for (int i = 0; i < N; i++) 
	{
		// 찾으려는 key 값보다 크거나 같은 숫자가 배열 몇 번째에 처음 등장하는지 찾는 함수
		cout << lower_bound(x2.begin(), x2.end(), x1[i]) - x2.begin() << " ";
	}

	return 0;
}