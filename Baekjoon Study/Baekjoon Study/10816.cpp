#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, temp;
    map<int, int> arr;

    cin >> N;
    while (N--)
    {
        cin >> temp;
        arr[temp]++;
    }

    cin >> M;
    while (M--)
    {
        cin >> temp;
        cout << arr[temp] << " ";
    }
    cout << '\n';

    return 0;
}