#include <iostream>
#include <cstring>
using namespace std;

#define LENGTH 20

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL);

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
        cout << endl;
    }

    return 0;
}