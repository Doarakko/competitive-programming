#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    string S = "atcoder";
    string s, t;
    cin >> s >> t;
    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] == '@' && t[i] == '@')
            {
                continue;
            }
            else if (s[i] == '@' && S.find(t[i]) != -1)
            {
                continue;
            }
            else if (t[i] == '@' && S.find(s[i]) != -1)
            {
                continue;
            }
            else
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "You can win" << endl;
    }
    else
    {
        cout << "You will lose" << endl;
    }
}
