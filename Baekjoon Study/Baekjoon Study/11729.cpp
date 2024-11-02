#include <iostream>
using namespace std;

class HanoiTower
{
private:
	int count;

public:
	HanoiTower() : count(0)
	{

	}
	void CountMove(int start, int middle, int end, int num)
	{
		count++;

		if (num != 1)
		{
			CountMove(start, end, middle, num - 1);
			CountMove(middle, start, end, num - 1);
		}
	}
	void PrintMove(int start, int middle, int end, int num)
	{
		if (num == 1)
		{
			cout << start << " " << end << '\n';
		}
		else
		{
			PrintMove(start, end, middle, num - 1);
			cout << start << " " << end << '\n';
			PrintMove(middle, start, end, num - 1);
		}
	}
	void TotalCount()
	{
		cout << '\n' << count << '\n';
	}
};

int main()
{
	int N;
	cin >> N;

	HanoiTower h;
	h.CountMove(1, 2, 3, N);

	h.TotalCount();
	h.PrintMove(1, 2, 3, N);

	return 0;
}