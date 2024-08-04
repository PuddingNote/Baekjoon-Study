#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> x1(N);
	vector<int> x2(N);

	int input;
	for (int i = 0; i < N; i++)
	{
		cin >> input;

		x1[i] = input;
		x2[i] = input;
	}

	sort(x2.begin(), x2.end());	// unique�Լ� ����� ���� ����

	x2.erase(unique(x2.begin(), x2.end()), x2.end()); // �ߺ��� ���� ����

	for (int i = 0; i < N; i++) 
	{
		// ã������ key ������ ũ�ų� ���� ���ڰ� �迭 �� ��°�� ó�� �����ϴ��� ã�� �Լ�
		cout << lower_bound(x2.begin(), x2.end(), x1[i]) - x2.begin() << " ";
	}

	return 0;
}