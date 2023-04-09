#include <iostream>
#include <vector>
using namespace std;

bool isPrimeNum(int n)
{
    if (n == 1) return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main()
{
    int M, N;
    cin >> M >> N;

    vector<int> v(N - M + 1);
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = M + i;
    }

    int sum = 0;
    int primeMin = -1;
    for (auto i : v)
    {
        if (isPrimeNum(i))
        {
            if (sum == 0) primeMin = i;
            sum += i;
        }
    }

    if (primeMin == -1) cout << primeMin;
    else cout << sum << '\n' << primeMin;

    return 0;
}