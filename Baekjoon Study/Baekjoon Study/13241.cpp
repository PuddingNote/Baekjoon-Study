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
    long long a, b, gcd;

    cin >> a >> b;

    gcd = GCD(a, b);

    cout << gcd * (a / gcd) * (b / gcd) << '\n';

    return 0;
}