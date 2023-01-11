#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, ans = "";
    cin >> s;
    char pre = s[0];
    int cnt = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == pre)
        {
            cnt++;
        }
        else
        {
            ans += pre + to_string(cnt);
            pre = s[i];
            cnt = 1;
        }
        if (i == s.length() - 1)
        {
            ans += pre + to_string(cnt);
        }
    }
    cout << ans << endl;
}
