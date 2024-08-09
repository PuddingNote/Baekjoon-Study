#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    int input;
    map<int, int> arr;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        arr[input]++;
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> input;
        cout << arr[input] << " ";
    }
    cout << '\n';

    return 0;
}