#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, count = 0;
	string s;
	map<string, bool> arr;

	cin >> N >> M;
	
	while (N--)
	{
		cin >> s;
		arr[s] = true;
	}

	while (M--)
	{
		cin >> s;

		if (arr[s] == true)
		{
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}