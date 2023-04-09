#include <iostream>
using namespace std;

int main()
{
	int N;
    int A, B;

	cin >> N;

    A = N / 5;
	
    while (1)
    {
        if (A < 0)
        {
            cout << "-1";
            return 0;
        }
        if ((N - (5 * A)) % 3 == 0)
        {
            B = (N - (5 * A)) / 3;
            break;
        }
        A--;
    }
    cout << A + B;

	return 0;
}