#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;

class EnglishDictionary
{
private:
	map<string, int> m;

public:
	void Add(string str)
	{
		m.insert({ str, 1 });
	}
	void AddCount(string str)
	{
		map<string, int>::iterator iter = m.find(str);
		iter->second++;
	}
	bool Compare(string str)
	{
		return (m.find(str) != m.end());
	}
	static bool CompSort(const pair<string, int>& a, const pair<string, int>& b)
	{
		// ���� ������ �ܾ� ��
		if (a.second != b.second)
		{
			return a.second > b.second;
		}
		// �ܾ� ���� ��
		if (a.first.size() != b.first.size())
		{
			return a.first.size() > b.first.size();
		}
		// ���ĺ� ���� ��
		return a.first < b.first;
	}
	void SortAndResult()
	{
		vector<pair<string, int>> v(m.begin(), m.end());

		sort(v.begin(), v.end(), CompSort);

		for (vector<pair<string, int>>::iterator iter = v.begin(); iter != v.end(); iter++)
		{
			cout << iter->first << '\n';
		}
	}
};

int main()
{
	int N, M;
	cin >> N >> M;

	EnglishDictionary dic;
	while (N--)
	{
		string str;
		cin >> str;

		if (str.size() >= M)
		{
			if (!dic.Compare(str))
			{
				dic.Add(str);
			}
			else
			{
				dic.AddCount(str);
			}
		}
	}

	dic.SortAndResult();

	return 0;
}