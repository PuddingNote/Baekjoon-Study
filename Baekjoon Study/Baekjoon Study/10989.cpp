#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> count(10001, 0);	// 0���� 10000������ ũ�� ���� �� 0���� �ʱ�ȭ

	int input;
	for (int i = 0; i < N; i++)
	{
		cin >> input;
		count[input]++;
	}

	// ī���� ����
	for (int i = 1; i < 10001; i++)
	{
		while (count[i] > 0)
		{
			cout << i << '\n';
			count[i]--;
		}
	}

	return 0;
}