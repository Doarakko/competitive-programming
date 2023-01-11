#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, ans = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'B')
        {
            ans += s[i];
        }
        else if (ans.length() > 0)
        {
            ans.erase(ans.length() - 1);
        }
    }
    cout << ans << endl;
}
