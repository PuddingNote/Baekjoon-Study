#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    int R, r;

    cin >> R;

    for (int i = 0; i < R; i++)
    {
        cin >> r >> S;

        for (int j = 0; j < S.length(); j++)
        {
            for (int k = 0; k < r; k++)
            {
                cout << S[j];
            }
        }
        cout << '\n';
    }

    return 0;
}