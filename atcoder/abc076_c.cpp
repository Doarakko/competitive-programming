#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

bool check(string s, string t)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i] && s[i] != '?')
        {
            return false;
        }
    }
    return true;
}

int main(int argc, const char *argv[])
{
    string s, t;
    cin >> s >> t;

    int idx = -1;
    for (int i = 0; i + t.length() <= s.length(); i++)
    {
        if (check(s.substr(i, t.length()), t))
        {
            idx = i;
        }
    }

    if (idx >= 0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i == idx)
            {
                for (int j = 0; j < t.length(); j++)
                {
                    s[i + j] = t[j];
                }
            }
            else if (s[i] == '?')
            {
                s[i] = 'a';
            }
        }
        cout << s << endl;
    }
    else
    {
        cout << "UNRESTORABLE" << endl;
    }
}
