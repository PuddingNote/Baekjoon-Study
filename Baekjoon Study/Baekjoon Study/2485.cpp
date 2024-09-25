#include <iostream>
#include <vector>
using namespace std;

// �ִ�����
int GCD(int A, int B)
{
    while (B != 0)
    {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int main()
{
	int N;

	// �Է� ����
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++)			
	{
		cin >> v[i];
	}

	// ���� ���� ���� ����
	vector<int> temp(N - 1);
	for (int i = 0; i < N - 1; i++)		
	{
		temp[i] = v[i + 1] - v[i];
	}

	// ���� ���� ������ �ִ�����
	int gcd = temp[0];
	for (int i = 1; i < N - 1; i++)		
	{
		gcd = GCD(gcd, temp[i]);
	}

	// ���� ���� �߰� ���� ���
	int result = 0;
	for (int i = 0; i < N - 1; i++)		
	{
		result += (temp[i] / gcd) - 1;	// ���̿� �ʿ��� ���� ���� : ���� ���� ���ݿ��� �ִ������� ������ 1�� �� ��
	}

	cout << result << '\n';

	return 0;
}