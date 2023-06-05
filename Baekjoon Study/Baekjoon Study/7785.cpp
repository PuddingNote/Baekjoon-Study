// �ڵ�� �� �۵������� Set�� Map�� ����ؾ���
/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	string name;
	string compare;
	vector<string> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> name >> compare;

		if (compare == "enter")
		{
			v.push_back(name);
		}
		else if (compare == "leave")
		{
			// vector���� name�� �������� ã�� ����
			if (find(v.begin(), v.end(), name) != v.end()) 
			{
				int index = find(v.begin(), v.end(), name) - v.begin();
				v.erase(v.begin() + index);
			}
		}
	}

	sort(v.begin(), v.end(), greater<string>()); // ���� ���� ����

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int N;
	string name;
	string compare;
	set<string, greater<string>> s;

	cin >> N;

	while (N--)
	{
		cin >> name >> compare;

		if (compare == "enter")
		{
			s.insert(name);
		}
		else if (compare == "leave")
		{
			s.erase(name);
		}
	}

	for (auto it = s.begin(); it != s.end(); it++) 
	{
		cout << *it << '\n';
	}

	return 0;
}