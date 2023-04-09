#include <iostream>
#include <vector>
using namespace std;

bool isPrimeNum(int n) 
{
	if (n == 1) return false;

	for (int i = 2; i < n; i++) 
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main()
{
	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 0; i < v.size(); i++)
	{
		cin >> v[i];
	}

	int count = 0;
	for (auto i : v)
	{
		if (isPrimeNum(i)) count++;
	}

	cout << count;

	return 0;
}