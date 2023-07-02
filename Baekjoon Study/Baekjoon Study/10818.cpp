#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, input;
    int min = 1000000, max = -1000000;
    
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input;

        if (input < min)
        {
            min = input;
        }
        if (input > max)
        {
            max = input;
        }
    }

    cout << min << " " << max << '\n';

    return 0;
}