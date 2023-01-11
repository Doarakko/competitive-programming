#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '0')
            {
                cnt++;
            }
        }
        else
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
    }
    int ans = cnt;
    cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '1')
            {
                cnt++;
            }
        }
        else
        {
            if (s[i] == '0')
            {
                cnt++;
            }
        }
    }
    ans = min(ans, cnt);
    cout << ans << endl;
}
