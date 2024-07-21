#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>     // INT_MAX를 사용하기위해 선언
using namespace std;

void createPatterns(char pattern_1[8][8], char pattern_2[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                pattern_1[i][j] = 'W';
                pattern_2[i][j] = 'B';
            }
            else
            {
                pattern_1[i][j] = 'B';
                pattern_2[i][j] = 'W';
            }
        }
    }
}

int countMismatches(vector<string>& board, int x, int y, char pattern[8][8])
{
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != pattern[i][j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int N, M;

    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; i++)
    {
        cin >> board[i];
    }

    char pattern_1[8][8], pattern_2[8][8];
    createPatterns(pattern_1, pattern_2);

    int minRepaints = INT_MAX;

    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int repaints_1 = countMismatches(board, i, j, pattern_1);
            int repaints_2 = countMismatches(board, i, j, pattern_2);
            minRepaints = min(minRepaints, min(repaints_1, repaints_2));
        }
    }

    cout << minRepaints << '\n';

    return 0;
}