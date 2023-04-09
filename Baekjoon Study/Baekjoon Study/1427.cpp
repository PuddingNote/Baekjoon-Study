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

	string a;
	a = to_string(N);

	sort(a.begin(), a.end(), compare);
	
	cout << a;
}