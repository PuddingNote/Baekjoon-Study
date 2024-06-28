#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	int sum;
	vector<int> v;

	while (1)
	{
		sum = 0;

		cin >> N;

		if (N == -1) break;

		// ����� ã�� ���Ϳ� ����
		for (int i = 1; i < N; i++)
		{
			if (N % i == 0)
			{
				v.push_back(i);
			}
		}

		// ����� �� ���
		for (int i = 0; i < v.size(); i++)
		{
			sum += v[i];
		}

		// ���������� Ȯ��
		if (sum == N)
		{
			cout << N << " = ";
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i];
				if (i == v.size() - 1)
				{
					cout << '\n'; 
					break;
				}
				cout << " + ";
			}
		}
		else
		{
			cout << N << " is NOT perfect." << '\n';
		}

		v.erase(v.begin(),v.end());
	}

	return 0;
}