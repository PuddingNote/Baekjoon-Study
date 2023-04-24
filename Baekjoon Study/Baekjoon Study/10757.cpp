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
	
	// �ڸ����� �� �� ���� A�� ����(�� ũ���� �ڸ����� ������ ���X)
	if (lenB > lenA)
	{
		swap(A, B);
		swap(lenA, lenB);
	}

	// �ΰ��� ���� �ڸ��� �����ֱ� (�� �������� �ڿ� 0���� ä���)
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