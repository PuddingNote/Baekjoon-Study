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
	string alp = "abcdefghijklmnopqrstuvwxyz";	// 알파벳 배열 선언이 필요

	cin >> s;
	
	// string str = "문자열";
	// str.find(원하는 문자 혹은 문자열,startIndex);
	// str에서 원하는 문자가 있을때는 str에 해당되는 위치를 반환하고 없으면 -1을 리턴해주는 구조
	for (int i = 0; i < alp.length(); i++)
	{
		cout << (int)s.find(alp[i]) << " ";
	}

	return 0;
}