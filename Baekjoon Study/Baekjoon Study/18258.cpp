#include <iostream>
#include <string>
using namespace std;

class Queue
{
private:
private:
    int frontIndex;
    int backIndex;
    int capacity;
    int* arr;
    int currentSize;

public:
    Queue(int N) : frontIndex(0), backIndex(0), capacity(N), currentSize(0)
    {
        arr = new int[N];
    }
    ~Queue()
    {
        delete[] arr;
    }
    void push(int a)
    {
        if (currentSize == capacity)
        {
            return;
        }
        arr[backIndex] = a;
        backIndex = (backIndex + 1) % capacity;
        currentSize++;
    }
    int pop()
    {
        if (currentSize == 0)
        {
            return -1;
        }
        int frontValue = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        currentSize--;
        return frontValue;
    }
    int size()
    {
        return currentSize;
    }
    int empty()
    {
        return currentSize == 0 ? 1 : 0;
    }
    int front()
    {
        if (currentSize == 0)
        {
            return -1;
        }
        return arr[frontIndex];
    }
    int back()
    {
        if (currentSize == 0)
        {
            return -1;
        }
        return arr[(backIndex - 1 + capacity) % capacity];
    }
};

int main()
{
    // �̰ž����� �ð��ʰ�..
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    Queue queue(N);
    while (N--)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int x;
            cin >> x;

            queue.push(x);
        }
        else if (str == "pop")
        {
            cout << queue.pop() << '\n';
        }
        else if (str == "size")
        {
            cout << queue.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << queue.empty() << '\n';
        }
        else if (str == "front")
        {
            cout << queue.front() << '\n';
        }
        else if (str == "back")
        {
            cout << queue.back() << '\n';
        }
    }

    return 0;
}

//int main()
//{
//	int N;
//	cin >> N;
//	cin.ignore();	// getline()�Լ��� cin >> N ���Ŀ� ���ɶ� '\n'�� ó������ �ʾƼ� N-1�� ����Ǵ°��� �����ϱ�����
//
//	Queue queue(N);
//	while (N--)
//	{
//		string input;
//		getline(cin, input);
//		
//		string str;
//		string num;
//		for (int i = 0; i < input.size(); i++)
//		{
//			if (isalpha(input[i]))
//			{
//				str += input[i];
//			}
//			else if (isdigit(input[i]))
//			{
//				num += input[i];
//			}
//		}
//
//		if (str == "push")
//		{
//			queue.push(stoi(num));
//		}
//		else if (str == "pop")
//		{
//			cout << queue.pop() << '\n';
//		}
//		else if (str == "size")
//		{
//			cout << queue.size() << '\n';
//		}
//		else if (str == "empty")
//		{
//			cout << queue.empty() << '\n';
//		}
//		else if (str == "front")
//		{
//			cout << queue.front() << '\n';
//		}
//		else if (str == "back")
//		{
//			cout << queue.back() << '\n';
//		}
//	}
//
//	return 0;
//}