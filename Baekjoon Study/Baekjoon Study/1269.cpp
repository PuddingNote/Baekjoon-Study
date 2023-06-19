// map사용
//#include <iostream>
//#include <map>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	int num;
//	map<int, bool> m;
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N + M; i++)
//	{
//		cin >> num;
//
//		if (m[num] == true)
//		{
//			m.erase(num);
//		}
//		else
//		{
//			m[num] = true;
//		}
//	}
//
//	cout << m.size() << '\n';
//
//	return 0;
//}

// set 사용
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int N, M;
	int num;
	set<int> s;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> num;

		s.insert(num);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> num;

		if (s.count(num) == true)
		{
			s.erase(num);
		}
		else
		{
			s.insert(num);
		}
	}

	cout << s.size();

	return 0;
}