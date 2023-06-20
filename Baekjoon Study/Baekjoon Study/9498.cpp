#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;

	if (score >= 90 && score <= 100)
	{
		cout << "A" << '\n';
	}
	else if (score >= 80 && score <= 89)
	{
		cout << "B" << '\n';
	}
	else if (score >= 70 && score <= 79)
	{
		cout << "C" << '\n';
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "D" << '\n';
	}
	else
	{
		cout << "F" << '\n';
	}

	return 0;
}