#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int cnt = 1; // �������� ī��Ʈ�ϱ⶧���� ���۰� 1 ex)a b c d -> ���� 3 = cnt : X

	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')	// �����϶� ī��Ʈ
		{	
			cnt++;
		}
	}

	if (s[0] == ' ') cnt--;	// 0��°�� ����
	if (s[s.length() - 1] == ' ') cnt--; // �������� ����

	cout << cnt << '\n';

	return 0;
}