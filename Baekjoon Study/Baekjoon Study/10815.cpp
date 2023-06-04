#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // �̰� �ȳ����ϱ� �ð��ʰ��� ������
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
        cout << binary_search(v.begin(), v.end(), temp) << '\n'; // ã�°��� ������ true
    }

	return 0;
}