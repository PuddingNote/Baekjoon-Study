#include <iostream>
using namespace std;

class Stack
{
private:
	int* arr;
	int top;

public:
	Stack(int size) : top(-1)
	{
		arr = new int[size];
	}
	~Stack()
	{
		delete[] arr;
	}
	void push(int x)
	{
		arr[++top] = x;
	}
	int pop()
	{
		if (top == -1)
		{
			return - 1;
		}
		return arr[top--];
	}
	int count()
	{
		return top + 1;
	}
	int isEmpty()
	{
		if (top == -1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int showTop()
	{
		if (top == -1)
		{
			return -1;
		}
		return arr[top];
	}
};

int main()
{
	// 이거 안넣으면 시간초과...
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	Stack s(N);
	while (N--)
	{
		int input;
		cin >> input;
		switch (input)
		{
		case 1:
			int X;
			cin >> X;
			s.push(X);
			break;
		case 2:
			cout << s.pop() << '\n';
			break;
		case 3:
			cout << s.count() << '\n';
			break;
		case 4:
			cout << s.isEmpty() << '\n';
			break;
		case 5:
			cout << s.showTop() << '\n';
			break;
		}
	}

	return 0;
}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	// 이거 안넣으면 시간초과...
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//
//	int N;
//	cin >> N;
//
//	stack<int> s;
//	for (int i = 0; i < N; i++)
//	{
//		int input;
//		cin >> input;
//		if (input == 1)
//		{
//			int X;
//			cin >> X;
//			s.push(X);
//		}
//		else if (input == 2)
//		{
//			if (s.empty())
//			{
//				cout << -1 << '\n';
//			}
//			else
//			{
//				cout << s.top() << '\n';
//				s.pop();
//			}
//		}
//		else if (input == 3)
//		{
//			cout << s.size() << '\n';
//		}
//		else if (input == 4)
//		{
//			cout << (s.empty() ? 1 : 0) << '\n';
//		}
//		else if (input == 5)
//		{
//			cout << (s.empty() ? -1 : s.top()) << '\n';
//		}
//	}
//
//	return 0;
//}