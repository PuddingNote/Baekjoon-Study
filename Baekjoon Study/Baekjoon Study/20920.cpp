#include <iostream>
#include <string>
#include <set>
using namespace std;

class Dictionary
{
private:
	set<string> s;

public:
	void Add(string str)
	{
		s.insert(str);
	}
	bool Compare(string str)
	{
		return (s.find(str) != s.end());
	}
	void AddCount(string str)
	{
		
	}
};

int main()
{
	int N, M;
	cin >> N >> M;

	Dictionary dic;
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



	return 0;
}