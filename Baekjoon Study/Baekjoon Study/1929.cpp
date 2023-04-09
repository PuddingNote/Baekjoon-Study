#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	int rt;
	for (int i = M; i <= N; i++) 
	{
		rt = sqrt(i);
		if (rt == 1 && i != 1) 
		{
			cout << i << '\n';
			continue;
		}
		if (i % 2) {
			for (int j = 2; j <= rt; j++) 
			{
				if (!(i % j)) break;
				if (j == rt) cout << i << '\n';
			}
		}
	}
    
    return 0;
}