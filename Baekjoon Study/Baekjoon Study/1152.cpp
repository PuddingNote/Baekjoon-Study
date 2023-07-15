#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int cnt = 1; // 공백으로 카운트하기때문에 시작값 1 ex)a b c d -> 공백 3 = cnt : X

	getline(cin, s);
	
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')	// 공백일때 카운트
		{	
			cnt++;
		}
	}

	if (s[0] == ' ') cnt--;	// 0번째가 공백
	if (s[s.length() - 1] == ' ') cnt--; // 마지막이 공백

	cout << cnt << '\n';

	return 0;
}