// #1
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, result;
	cin >> N;

	int* x = new int[N];
	int* y = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	sort(x, x + N);
	sort(y, y + N);

	result = (x[N - 1] - x[0]) * (y[N - 1] - y[0]);

	cout << result << '\n';

	return 0;
}

// #2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, result;
	cin >> N;

	vector<int> x(N), y(N);

	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	result = (x[N - 1] - x[0]) * (y[N - 1] - y[0]);

	cout << result << '\n';

	return 0;
}



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, result;
	cin >> N;

	vector<int> x(N), y(N);

	for (int i = 0; i < N; i++)
	{
		cin >> x[i] >> y[i];
	}

	auto minmax_x = minmax_element(x.begin(), x.end());
	auto minmax_y = minmax_element(y.begin(), y.end());

	result = (*minmax_x.second - *minmax_x.first) * (*minmax_y.second - *minmax_y.first);

	/*auto min_x = min_element(x.begin(), x.end());
	auto max_x = max_element(x.begin(), x.end());
	auto min_y = min_element(y.begin(), y.end());
	auto max_y = max_element(y.begin(), y.end());*/

	//result = (*max_x - *min_x) * (*max_y - *min_y);

	cout << result << '\n';

	return 0;
}