#include <iostream>
#include <string>
#include <set>				// ���������� ���� = �ߺ� ���X = Set�� �ߺ� ��� X
using namespace std;

class Dance
{
private:
	set<string> dance;

public:
	Dance()
	{
		dance.insert("ChongChong");		// ChongChong�� ������ 1ȸ �̻� �־����⿡ ����� �Բ� �ʱ�ȭ �� �񱳷� ���
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
		return dance.size();		// �ߺ��� ���⶧���� set�� ������ = �ش�Ǵ� ����� ��
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

		// set�� �ߺ��� ������� �ʱ� ������ �Ѵ� �߰��ص� ����� ���� (�ߺ��� �ִٸ� set�� �ڵ����� ó������)
		if (dance.Compare(s1) || dance.Compare(s2))
		{
			dance.Add(s1);
			dance.Add(s2);
		}
	}

	cout << dance.Count() << '\n';

	return 0;
}