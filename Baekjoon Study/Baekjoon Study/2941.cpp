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
            idx = str.find(croatian[i]); // find("ã�� ����");
            if (idx == string::npos) break;
            // string::find = ã�� ���ڿ��� ù��° �ε����� ��ȯ�ϴ� �Լ�
            // string::npos = ã�� ���ڿ��� ���°�� string::npos�� ��ȯ�Ѵ�
            str.replace(idx, croatian[i].length(), "#"); // replace(���� ��ġ,����,ġȯ ���ڿ�);
        }
    }
    cout << str.length(); // ���ڿ�.length(); ���ڿ� ���� ���ϱ�
}