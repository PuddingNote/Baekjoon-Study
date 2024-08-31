#include <iostream>
using namespace std;

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
    int a1, b1;
    int a2, b2;

    cin >> a1 >> b1;
    cin >> a2 >> b2;

    int N = a1 * b2 + a2 * b1;
    int M = b1 * b2;

    cout << N / GCD(N, M) << ' ' << M / GCD(N, M) << '\n';

	return 0;
}