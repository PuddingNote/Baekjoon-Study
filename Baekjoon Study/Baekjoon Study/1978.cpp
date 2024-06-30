// #1
#include <iostream>
#include <cmath>        // sqrt()
using namespace std;

int main()
{
    int N;
    int count = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        bool isPrimeNum = true;
        if (num <= 1)           // 1 이하의 수는 소수가 아님
        {
            isPrimeNum = false;
        }
        else if (num == 2)      // 2는 소수
        {
            isPrimeNum = true;
        }
        else if (num % 2 == 0)  // 짝수는 소수가 아님
        {
            isPrimeNum = false;
        }
        else
        {   // 3부터 sqrt(n)까지 검사 (홀수만)
            for (int j = 3; j <= sqrt(num); j += 2) 
            {
                if (num % j == 0)
                {
                    isPrimeNum = false;
                    break;
                }
            }
        }

        if (isPrimeNum) count++;
    }

    cout << count << '\n';

    return 0;
}

// #2
#include <iostream>
#include <cmath>        // sqrt()
using namespace std;

bool isPrimeNum(int n)
{
    if (n <= 1) return false;       // 1 이하의 수는 소수가 아님
    if (n == 2) return true;        // 2는 소수
    if (n % 2 == 0) return false;   // 짝수는 소수가 아님

    // 3부터 sqrt(n)까지 검사 (홀수만)
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (isPrimeNum(num)) count++;
    }

    cout << count << '\n';

    return 0;
}

// #3(티스토리 미기재)
#include <iostream>
#include <vector>
#include <cmath>    // sqrt()
using namespace std;

bool isPrimeNum(int n) 
{
	if (n <= 1) return false;       // 1 이하의 수는 소수가 아님
	if (n == 2) return true;        // 2는 소수
	if (n % 2 == 0) return false;   // 짝수는 소수가 아님

	// 3부터 sqrt(n)까지 검사 (홀수만)
	for (int i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main()
{
	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	int count = 0;
	for (int i = 0; i < v.size(); i++)		// for (auto i : v)
	{
		if (isPrimeNum(v[i])) count++;
	}

	cout << count << '\n';

	return 0;
}