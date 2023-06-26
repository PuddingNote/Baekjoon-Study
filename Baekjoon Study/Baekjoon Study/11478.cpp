#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	string S, temp;
	set<string> set;

	cin >> S;
	
	for (int i = 0; i < S.size(); i++)
	{
		temp = "";
		for (int j = i; j < S.size(); j++)
		{
			temp += S[j];
			set.insert(temp);
		}
	}

	cout << set.size() << '\n';

	return 0;
}