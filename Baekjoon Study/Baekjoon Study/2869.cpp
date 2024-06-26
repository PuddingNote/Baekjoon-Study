#include <iostream>
using namespace std;

int main()
{
	int V, A, B;

	cin >> A >> B >> V;

	cout << (V - B - 1) / (A - B) + 1 << '\n';

	return 0;
}