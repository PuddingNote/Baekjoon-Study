#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int A[100][100];
	int B[100][100];

	cin >> N >> M;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				if (i == 0)
				{
					cin >> A[j][k];
				}
				else
				{
					cin >> B[j][k];
				}
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}