#include <iostream>

using namespace std;

long long GCD(long long a, long long b)
{
    if (a < b)
    {
        return GCD(a, b % a);
    }

    if (b == 0)
    {
        return a;
    }

    return GCD(b, a % b);
}

int main()
{
    int a1, b1, a2, b2;
    int N, M;

    cin >> a1 >> b1 >> a2 >> b2;

    N = a1 * b2 + a2 * b1;
    M = b1 * b2;

    cout << N / GCD(N, M) << ' ' << M / GCD(N, M) << '\n';

	return 0;
}