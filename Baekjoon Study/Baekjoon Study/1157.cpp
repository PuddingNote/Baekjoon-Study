#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    string s;
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int alpCount[26];
    int MAX = -1;
    char result;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }

    // 0으로 배열 초기화
    for (int i = 0; i < 26; i++)
    {
        alpCount[i] = 0;
    }

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < alp.length(); j++)
        {
            if (s[i] == alp[j])
            {
                alpCount[j]++;
                break;
            }
        }
    }

    bool flag = false;
    // ? 예외처리 해줘야댐
    for (int i = 0; i < 26; i++)
    {
        if (alpCount[i] >= MAX)
        {   
            if (alpCount[i] == MAX)
            {
                flag = true;
            }
            else
            {
                flag = false;
                MAX = alpCount[i];
                result = alp[i];
            }
        }
    }

    if (flag == true)
    {
        result = '?';
    }

    cout << result;

    return 0;
}