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
	string s;
	vector<string> v;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (find(v.begin(), v.end(), s) == v.end())
		{	// 같은거 있으면 추가X
			v.push_back(s);
		}
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}