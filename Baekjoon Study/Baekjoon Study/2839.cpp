#include <iostream>
using namespace std;

int main()
{
	int N;
    int A, B;

	cin >> N;

    A = N / 5;
	
    while (true)
    {
        if (A < 0)
        {
            cout << "-1" << '\n';
            break;
        }
        if ((N - (5 * A)) % 3 == 0)
        {
            B = (N - (5 * A)) / 3;
            cout << A + B << '\n';
            break;
        }
        A--;
    }

	return 0;
}