#include <iostream>
//#include <algorithm>
using namespace std;

// 유클리드 호제법
// 숫자 A, B가 (A > B) 존재할때 C = A % B
// 이때 A와 B의 최대공약수는 B와 C의 최대 공약수와 같음
// 이 법칙을 반복하여 C가 0이 될때의 B값을 구하는 것
// 최대공약수 (재귀적 방식)
//int GCD(int A, int B)
//{
//    if (B > A)
//    {
//        swap(A, B);
//    }
//
//    int temp = A % B;
//
//    if (temp == 0)
//    {
//        return B;
//    }
//    return GCD(B, temp);
//}

// 최대공약수 (반복적 방식)
int GCD(int A, int B)
{
    while (B != 0)
    {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

// 최소공배수
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int main()
{
    int T;
    cin >> T;

    int A, B;
    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;

        cout << LCM(A, B) << '\n';
    }

    return 0;
}