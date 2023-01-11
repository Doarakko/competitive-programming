#include <iostream>
#include <map>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, t;
    cin >> s >> t;
    map<char, char> mp;
    bool flag = true;
    for (int i = 0; i < s.length() && flag; i++)
    {
        if (mp.count(s[i]) == 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (mp[s[j]] == t[i])
                {
                    flag = false;
                }
            }
            mp[s[i]] = t[i];
        }
        else
        {
            if (mp[s[i]] != t[i])
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
