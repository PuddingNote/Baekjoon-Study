#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

    int idx;
    string str;
    cin >> str;
    
    for (int i = 0; i < croatian.size(); i++)
    {
        while (1)
        {
            idx = str.find(croatian[i]); // find("찾는 문자");
            if (idx == string::npos) break;
            // string::find = 찾는 문자열의 첫번째 인덱스를 반환하는 함수
            // string::npos = 찾는 문자열이 없는경우 string::npos를 반환한다
            str.replace(idx, croatian[i].length(), "#"); // replace(시작 위치,길이,치환 문자열);
        }
    }
    cout << str.length(); // 문자열.length(); 문자열 길이 구하기
}