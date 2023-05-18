#include <iostream>

using namespace std;

//MenOfPassion(A[], n) {
//    sum < -0;
//    for i < -1 to n - 2
//        for j < -i + 1 to n - 1
//            for k < -j + 1 to n
//                sum < -sum + A[i] ¡¿ A[j] ¡¿ A[k]; # ÄÚµå1
//                return sum;
//}

int main()
{
	long long N;

	cin >> N;

	cout << ((N - 2) * (N - 1) * N) / 6 << endl << 3;

	return 0;
}