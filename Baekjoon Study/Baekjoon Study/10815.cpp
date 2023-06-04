#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 이거 안넣으니까 시간초과로 실패함
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, temp;
    vector<int> v;

    cin >> N;
    while (N--) 
    {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    cin >> M;
    while (M--)
    {
        cin >> temp;
        cout << binary_search(v.begin(), v.end(), temp) << '\n'; // 찾는값이 있으면 true
    }

	return 0;
}