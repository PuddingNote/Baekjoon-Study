#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string A, B;
	string answer;

	cin >> A >> B;

	int lenA = A.length();
	int lenB = B.length();
	
	// 자릿수가 더 긴 수를 A로 설정(더 크지만 자릿수가 같으면 상관X)
	if (lenB > lenA)
	{
		swap(A, B);
		swap(lenA, lenB);
	}

	// 두개의 숫자 자릿수 맞춰주기 (더 적은숫자 뒤에 0으로 채우기)
	reverse(B.begin(), B.end());
	for (int i = 0; i < lenA - lenB; i++)
	{
		B.push_back('0');
	}
	reverse(B.begin(), B.end());

	int x, y, sum, round = 0;
	for (int i = lenA - 1; i >= 0; i--)
	{
		x = A[i] - '0';
		y = B[i] - '0';
		sum = x + y;
		if (round == 1)
		{
			sum++;
			round = 0;
		}
		if (sum > 9) round = 1;
		answer += sum % 10 + '0';
	}
	if (round == 1) answer += '1';

	reverse(answer.begin(), answer.end());

	cout << answer << endl;

	return 0;
}