#include <iostream>
#include <map>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	string s;
	map<string, bool> arr;	// ���ڿ��� key�� ����ϰ�, �ش� ���ڿ��� ���� ���θ� bool������ ����
	
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		arr[s] = true;
	}

	int count = 0;
	for (int i = 0; i < M; i++)
	{
		cin >> s;

		/*if (arr[s] == true)
		{
			count++;
		}*/

		if (arr.find(s) != arr.end())
		{
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}