#include <iostream>
//#include <algorithm>
using namespace std;

// ��Ŭ���� ȣ����
// ���� A, B�� (A > B) �����Ҷ� C = A % B
// �̶� A�� B�� �ִ������� B�� C�� �ִ� ������� ����
// �� ��Ģ�� �ݺ��Ͽ� C�� 0�� �ɶ��� B���� ���ϴ� ��
// �ִ����� (����� ���)
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

// �ִ����� (�ݺ��� ���)
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

// �ּҰ����
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