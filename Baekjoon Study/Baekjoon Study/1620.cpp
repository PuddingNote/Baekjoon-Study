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

		if (isdigit(input[0]))			// 입력값이 숫자인지 판단
		{
			int index = stoi(input);	// 문자를 숫자로 변경, stoi = string to int
			v[i] = indexToName[index];
		}
		else
		{
			v[i] = to_string(nameToIndex[input]);	// 문자열로 변환 후 저장
		}
	}

	//cout << "====================" << '\n';
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}

	return 0;
}