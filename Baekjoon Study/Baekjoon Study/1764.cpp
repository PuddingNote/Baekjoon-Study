#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    set<string> s;
    vector<string> result;

    string name;
    for (int i = 0; i < N; i++)
    {
        cin >> name;

        s.insert(name);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> name;

        if (s.find(name) != s.end())
        {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << '\n';
    }

    return 0;
}

// 시간 초과
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    int N, M;
//    cin >> N >> M;
//
//    vector<string> unheard(N);
//    vector<string> unwatch(M);
//    vector<string> result;
//
//    // 듣도 못한 사람의 명단 입력
//    for (int i = 0; i < N; ++i)
//    {
//        cin >> unheard[i];
//    }
//
//    // 보도 못한 사람의 명단 입력
//    for (int i = 0; i < M; ++i)
//    {
//        cin >> unwatch[i];
//    }
//
//    for (int i = 0; i < unwatch.size(); i++)
//    {
//        for (int j = 0; j < unheard.size(); j++)
//        {
//            if (unwatch[i] == unheard[j])
//            {
//                result.push_back(unwatch[i]);
//                break;
//            }
//        }
//    }
//
//    sort(result.begin(), result.end());
//
//    cout << result.size() << '\n';
//    for (int i = 0; i < result.size(); i++)
//    {
//        cout << result[i] << '\n';
//    }
//
//    return 0;
//}