#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, S = "keyence";
    cin >> s;

    string tmp;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; i + j < s.length(); j++)
        {
            tmp = s.substr(0, i) + s.substr(i + j, s.length() - (i + j));
            // cout << tmp << endl;
            if (tmp == S)
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
