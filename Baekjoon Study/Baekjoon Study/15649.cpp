#include <iostream>
#include <vector>
using namespace std;

void backtracking(int N, int M, int depth, vector<int>& sequence, vector<bool>& visited)
{
    if (depth == M)
    {
        for (int i = 0; i < M; ++i)
        {
            cout << sequence[i] << " ";
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i)
    {
        if (!visited[i])
        {
            visited[i] = true;
            sequence.push_back(i);
            backtracking(N, M, depth + 1, sequence, visited);
            sequence.pop_back();
            visited[i] = false;
        }
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> sequence;
    vector<bool> visited(N + 1, false);

    backtracking(N, M, 0, sequence, visited);

    return 0;
}