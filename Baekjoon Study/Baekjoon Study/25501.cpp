#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
private:
    int cnt;
    string str;

public:
    void set(const string& s)
    {
        str = s;
        cnt = 0;
    }
    int recursion(const string& s, int l, int r)
    {
        cnt++;

        if (l >= r)
        {
            return 1;
        }
        else if (s[l] != s[r])
        {
            return 0;
        }
        else
        {
            return recursion(s, l + 1, r - 1);
        }
    }
    int isPalindrome()
    {
        return recursion(str, 0, str.length() - 1);
    }
    int count()
    {
        return cnt;
    }
};

int main()
{
    int T;
    cin >> T;

    Palindrome p;
    while (T--)
    {
        string s;
        cin >> s;

        p.set(s);
        cout << p.isPalindrome() << " " << p.count() << '\n';
    }

    return 0;
}