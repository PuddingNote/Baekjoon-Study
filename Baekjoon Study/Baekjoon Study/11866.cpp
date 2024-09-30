#include <iostream>
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
    int pop(int K)
    {
        frontIndex = (frontIndex + K - 1) % currentSize;
        int value = arr[frontIndex];

        for (int i = frontIndex; i < currentSize - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        currentSize--;
        return value;
    }
    int size()
    {
        return currentSize;
    }
};

int main()
{
	int N, K;
	cin >> N >> K;

    Queue queue(N);
	for (int i = 1; i <= N; i++)
	{
        queue.push(i);
	}

    cout << '<';
    while (queue.size() != 0)
    {
        int value = queue.pop(K);
        cout << value;

        if (queue.size() != 0)
        {
            cout << ", ";
        }
    }
    cout << '>' << '\n';

	return 0;
}