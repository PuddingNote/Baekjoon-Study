// 1
#include <iostream>
using namespace std;

int main() 
{
    string s;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    int i, j;

    cin >> s;

    for (i = 0; i < alp.length(); i++)
    {
        for (j = 0; j < s.length(); j++)
        {
            if (s[j] == alp[i])
            {
                cout << j << " ";
                break;
            }
        }

        if (s[j] != alp[i])
        {
            cout << -1 << " ";
        }
    }

    return 0;
}

// 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	string alp = "abcdefghijklmnopqrstuvwxyz";	// ���ĺ� �迭 ������ �ʿ�

	cin >> s;
	
	// string str = "���ڿ�";
	// str.find(���ϴ� ���� Ȥ�� ���ڿ�,startIndex);
	// str���� ���ϴ� ���ڰ� �������� str�� �ش�Ǵ� ��ġ�� ��ȯ�ϰ� ������ -1�� �������ִ� ����
	for (int i = 0; i < alp.length(); i++)
	{
		cout << (int)s.find(alp[i]) << " ";
	}

	return 0;
}