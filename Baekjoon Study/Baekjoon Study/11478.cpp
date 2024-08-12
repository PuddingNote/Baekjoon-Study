#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	string s;
	cin >> s;

	set<string> set;
	string temp;
	
	for (int i = 0; i < s.size(); i++)
	{
		temp = "";
		for (int j = i; j < s.size(); j++)
		{
			temp += s[j];
			set.insert(temp);
		}
	}

	cout << set.size() << '\n';

	return 0;
}