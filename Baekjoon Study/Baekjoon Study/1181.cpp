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

	// unique�� �������� ����
	sort(v.begin(), v.end());

	// ���ӵ� �ߺ� ��ҵ��� ��� �� ����
	v.erase(unique(v.begin(), v.end()), v.end());

	// ���� ���ǿ� �°� �ٽ� ����
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}