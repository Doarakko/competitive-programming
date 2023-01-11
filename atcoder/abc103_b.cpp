#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, t, tmp;
    cin >> s >> t;
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        tmp.clear();
        tmp = s.substr(i, s.length() - i) + s.substr(0, i);
        // cout << tmp << endl;
        if (tmp == t)
        {
            flag = true;
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
    return 0;
}
