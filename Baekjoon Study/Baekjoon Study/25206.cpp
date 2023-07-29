#include <iostream>
#include <string>
using namespace std;

#define SubjectCnt 20

int main()
{
	string subject;
	float inputScore;
	string grade;

    float sumScore = 0;
    float totalScore = 0;
    
    for (int i = 0; i < SubjectCnt; i++)
    {
        cin >> subject >> inputScore >> grade;

        totalScore += inputScore;

        if (grade == "P") totalScore -= inputScore;
        else if (grade == "A+") sumScore += (inputScore * 4.5);
        else if (grade == "A0") sumScore += (inputScore * 4.0);
        else if (grade == "B+") sumScore += (inputScore * 3.5);
        else if (grade == "B0") sumScore += (inputScore * 3.0);
        else if (grade == "C+") sumScore += (inputScore * 2.5);
        else if (grade == "C0") sumScore += (inputScore * 2.0);
        else if (grade == "D+") sumScore += (inputScore * 1.5);
        else if (grade == "D0") sumScore += (inputScore * 1.0);
        else if (grade == "F")  sumScore += (inputScore * 0.0);
    }

    cout << fixed;
    cout.precision(6);
    cout << sumScore / totalScore << '\n';

	return 0;
}