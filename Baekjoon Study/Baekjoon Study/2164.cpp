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
    int pop()
    {
        int frontValue;

        frontValue = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        currentSize--;

        return frontValue;
    }
    void change()
    {
        int temp;

        temp = pop();
        push(temp);
    }
    int size()
    {
        return currentSize;
    }
};

int main()
{
    int N;
    cin >> N;

    Queue queue(N);

    for (int i = 1; i <= N; i++)
    {
        queue.push(i);
    }

    while (queue.size() != 1)
    {
        queue.pop();
        queue.change();
    }

    cout << queue.pop() << '\n';

    return 0;
}