#include <iostream>
#include <vector>
using namespace std;

// 최대공약수
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

	// 입력 저장
	cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++)			
	{
		cin >> v[i];
	}

	// 나무 사이 간격 저장
	vector<int> temp(N - 1);
	for (int i = 0; i < N - 1; i++)		
	{
		temp[i] = v[i + 1] - v[i];
	}

	// 나무 사이 간격의 최대공약수
	int gcd = temp[0];
	for (int i = 1; i < N - 1; i++)		
	{
		gcd = GCD(gcd, temp[i]);
	}

	// 나무 사이 추가 나무 계산
	int result = 0;
	for (int i = 0; i < N - 1; i++)		
	{
		result += (temp[i] / gcd) - 1;	// 사이에 필요한 나무 개수 : 나무 사이 간격에서 최대공약수를 나누고 1을 뺀 수
	}

	cout << result << '\n';

	return 0;
}