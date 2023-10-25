#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N, input;
	cin >> N;

	vector<int> x1;
	vector<int> x2;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		x1.push_back(input);
		x2.push_back(input);
	}
	sort(x2.begin(), x2.end());	// ����

	x2.erase(unique(x2.begin(), x2.end()), x2.end()); // �ߺ��� ���� ����

	for (int i = 0; i < N; i++) 
	{
		// ã������ key ������ ���ų� ū ���ڰ� �迭 �� ��°���� ó�� �����ϴ��� ã�� ����
		cout << lower_bound(x2.begin(), x2.end(), x1[i]) - x2.begin() << " ";
	}

	return 0;
}