#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    string s;
    int t, x = 0, y = 0, z = 0;
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'L':
            x--;
            break;
        case 'R':
            x++;
            break;
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        case '?':
            z++;
            break;
        }
    }
    int ans;
    if (t == 1)
    {
        ans = abs(x) + abs(y) + z;
    }
    else
    {
        ans = abs(x) + abs(y) - z;
        if (ans < 0)
        {
            ans = abs(ans) % 2;
        }
    }
    cout << ans << endl;
}
