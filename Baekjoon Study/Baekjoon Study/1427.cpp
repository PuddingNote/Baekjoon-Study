#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(char a, char b)
{
	return a > b;
}

int main()
{
	int N;
	cin >> N;

	string s;
	s = to_string(N);

	sort(s.begin(), s.end(), compare);
	
	cout << s << '\n';

	return 0;
}