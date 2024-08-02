#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) 
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main()
{
	int N;
	cin >> N;

	vector<string> v(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	// unique를 쓰기위한 정렬
	sort(v.begin(), v.end());

	// 연속된 중복 요소들을 골라낸 후 제거
	v.erase(unique(v.begin(), v.end()), v.end());

	// 문제 조건에 맞게 다시 정렬
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}