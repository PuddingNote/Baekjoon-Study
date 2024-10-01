#include <iostream>
using namespace std;

class Deque
{
private:
	int frontIndex;
	int backIndex;
	int capacity;
	int* arr;

public:
	Deque(int size) : frontIndex(size), backIndex(size), capacity(size * 2)
	{
		arr = new int[capacity];
	}
	~Deque()
	{
		delete[] arr;
	}
	void pushFront(int num)
	{
		arr[--frontIndex] = num;
	}
	void pushBack(int num)
	{
		arr[backIndex++] = num;
	}
	int popFront()
	{
		return (frontIndex == backIndex) ? -1 : arr[frontIndex++];
	}
	int popBack()
	{
		return (frontIndex == backIndex) ? -1 : arr[--backIndex];
	}
	int size()
	{
		return backIndex - frontIndex;
	}
	int empty()
	{
		return (frontIndex == backIndex) ? 1 : 0;
	}
	int printFront()
	{
		return (frontIndex == backIndex) ? -1 : arr[frontIndex];
	}
	int printBack()
	{
		return (frontIndex == backIndex) ? -1 : arr[backIndex - 1];
	}
};

enum{ FRONTPUSH = 1, BACKPUSH, FRONTPOP, BACKPOP, SIZE, EMPTY, FRONTPRINT, BACKPRINT};

int main()
{
	// 없으면 시간초과..
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	Deque deque(N);
	while (N--)
	{
		int input;
		cin >> input;

		if (input == FRONTPUSH)
		{
			int x;
			cin >> x;

			deque.pushFront(x);
		}
		else if (input == BACKPUSH)
		{
			int x;
			cin >> x;

			deque.pushBack(x);
		}
		else if (input == FRONTPOP)
		{
			cout << deque.popFront() << '\n';
		}
		else if (input == BACKPOP)
		{
			cout << deque.popBack() << '\n';
		}
		else if (input == SIZE)
		{
			cout << deque.size() << '\n';
		}
		else if (input == EMPTY)
		{
			cout << deque.empty() << '\n';
		}
		else if (input == FRONTPRINT)
		{
			cout << deque.printFront() << '\n';
		}
		else if (input == BACKPRINT)
		{
			cout << deque.printBack() << '\n';
		}
	}

	return 0;
}