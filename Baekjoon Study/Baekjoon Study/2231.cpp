#include <iostream>
using namespace std;

int getSum(int n)
{
    int sum = 0;

    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main()
{
    int N;
    int result = 0;

    cin >> N;

    for (int i = 1; i < N; i++)
    {
        if (i + getSum(i) == N)
        {
            result = i;
            break;
        }
    }

    cout << result << '\n';

    return 0;
}