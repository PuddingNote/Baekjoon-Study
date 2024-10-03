#include <iostream>
#include <string>
#include <set>
using namespace std;

class Chat
{
private:
	int count;
	set<string> chat;

public:
	Chat() : count(0)
	{

	}
	void Set()
	{
		chat.clear();
	}
	bool Compare(string s)
	{
		return (chat.find(s) != chat.end());
	}
	void Add(string s)
	{
		chat.insert(s);
		count++;
	}
	int Result()
	{
		return count;
	}
};

int main()
{
	int N;
	cin >> N;

	Chat chat;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		if (s == "ENTER")
		{
			chat.Set();
		}
		else
		{
			if (!chat.Compare(s))
			{
				chat.Add(s);
			}
		}
	}

	cout << chat.Result() << '\n';

	return 0;
}