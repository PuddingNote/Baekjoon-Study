#include <iostream>
#include <string>
#include <set>				// 동명이인은 없다 = 중복 허용X = Set은 중복 허용 X
using namespace std;

class Dance
{
private:
	set<string> dance;

public:
	Dance()
	{
		dance.insert("ChongChong");		// ChongChong은 무조건 1회 이상 주어지기에 선언과 함께 초기화 후 비교로 사용
	}
	void Add(string s)
	{
		dance.insert(s);
	}
	bool Compare(string s)
	{
		return (dance.find(s) != dance.end());
	}
	int Count()
	{
		return dance.size();		// 중복이 없기때문에 set의 사이즈 = 해당되는 사람의 수
	}
};

int main()
{
	int N;
	cin >> N;

	Dance dance;
	while (N--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		// set은 중복을 허용하지 않기 때문에 둘다 추가해도 상관이 없다 (중복이 있다면 set이 자동으로 처리해줌)
		if (dance.Compare(s1) || dance.Compare(s2))
		{
			dance.Add(s1);
			dance.Add(s2);
		}
	}

	cout << dance.Count() << '\n';

	return 0;
}