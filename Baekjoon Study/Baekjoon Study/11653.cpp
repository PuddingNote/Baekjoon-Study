// #1
#include <iostream>
using namespace std;

int main()
{
	int N;
	int so = 2;

	cin >> N;

	while (N != 1)
	{
		if (N % so == 0)
		{
			N = N / so;
			cout << so << '\n';
		}
		else so++;
	}

	return 0;
}

// #2
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N % 2 == 0)
    {
        cout << 2 << '\n';
        N /= 2;
    }

    for (int so = 3; so <= sqrt(N); so += 2)
    {
        while (N % so == 0)
        {
            cout << so << '\n';
            N /= so;
        }
    }

    if (N > 2)
    {
        cout << N << '\n';
    }

    return 0;
}