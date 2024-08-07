#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	map<string, int> nameToIndex;
	map<int, string> indexToName;

	string name;
	for (int i = 0; i < N; i++)
	{
		cin >> name;
		nameToIndex[name] = i + 1;
		indexToName[i + 1] = name;
	}

	//cout << "====================" << '\n';
	string input;
	vector<string> v(M);
	for (int i = 0; i < M; i++)
	{
		cin >> input;

		if (isdigit(input[0]))			// �Է°��� �������� �Ǵ�
		{
			int index = stoi(input);	// ���ڸ� ���ڷ� ����, stoi = string to int
			v[i] = indexToName[index];
		}
		else
		{
			v[i] = to_string(nameToIndex[input]);	// ���ڿ��� ��ȯ �� ����
		}
	}

	//cout << "====================" << '\n';
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}