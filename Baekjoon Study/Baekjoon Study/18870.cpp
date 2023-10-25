#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N, input;
	cin >> N;

	vector<int> x1;
	vector<int> x2;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		x1.push_back(input);
		x2.push_back(input);
	}
	sort(x2.begin(), x2.end());	// 정렬

	x2.erase(unique(x2.begin(), x2.end()), x2.end()); // 중복된 원소 제거

	for (int i = 0; i < N; i++) 
	{
		// 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
		cout << lower_bound(x2.begin(), x2.end(), x1[i]) - x2.begin() << " ";
	}

	return 0;
}