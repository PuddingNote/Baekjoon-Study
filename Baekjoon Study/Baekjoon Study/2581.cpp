#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNum(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int primeMin = -1;
    for (int i = M; i <= N; i++)
    {
        if (isPrimeNum(i))
        {
            if (sum == 0) primeMin = i;
            sum += i;
        }
    }

    if (primeMin == -1) cout << primeMin << '\n';
    else cout << sum << '\n' << primeMin << '\n';

    return 0;
}