#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int N;
	cin >> N;

	deque<pair<int, int>> balloons;
	for (int i = 1; i <= N; i++)
	{
		int input;
		cin >> input;
		balloons.push_back({ i, input });
	}

    while (!balloons.empty())
	{
        int index = balloons.front().first;
        int move = balloons.front().second;
        cout << index << " ";
        balloons.pop_front();

        if (balloons.empty())
        {
            break;
        }

        if (move > 0)
        {
            for (int i = 0; i < move - 1; i++)
            {
                balloons.push_back(balloons.front());
                balloons.pop_front();
            }
        }
        else
        {
            for (int i = 0; i < -move; i++)
            {
                balloons.push_front(balloons.back());
                balloons.pop_back();
            }
        }
	}

	return 0;
}