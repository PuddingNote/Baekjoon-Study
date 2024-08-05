#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // �ð� ������ ����
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int M;
    cin >> M;

    int input;
    for (int i = 0; i < M; i++)
    {
        cin >> input;

        // ã�°��� ������ true ��ȯ (true = 1, false = 0 ���)
        cout << binary_search(v.begin(), v.end(), input) << ' '; 
    }

	return 0;
}