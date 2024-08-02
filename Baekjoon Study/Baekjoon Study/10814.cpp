#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Member
{
	int index;
	int age;
	string name;
};

bool compare(const Member& m1, const Member& m2)
{
	if (m1.age != m2.age)
	{
		return m1.age < m2.age;
	}
	else
	{
		return m1.index < m2.index;
	}
}

int main()
{
	int N;
	cin >> N;

	Member* m = new Member[N];

	for (int i = 0; i < N; i++)
	{
		cin >> m[i].age >> m[i].name;
		m[i].index = i;
	}

	sort(m, m + N, compare);

	for (int i = 0; i < N; i++)
	{
		cout << m[i].age << " " << m[i].name << '\n';
	}

	return 0;
}