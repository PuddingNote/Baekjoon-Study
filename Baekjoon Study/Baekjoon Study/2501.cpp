// return 0;이 한개
#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int result = 0;

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            K--;

            if (K == 0)
            {
                result = i;
                break;
            }
        }
    }

    if (K != 0)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << result << '\n';
    }


    return 0;
}

// return 0;이 여러개
#include <iostream>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
			K--;

            if (K == 0)
            {
                cout << i << '\n';
                return 0;
            }
        }
    }

    cout << 0 << '\n';

    return 0;
}