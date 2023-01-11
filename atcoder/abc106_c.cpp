#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    ll k;
    cin >> s >> k;
    char ans = '1';
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 == k)
        {
            ans = s[i];
            break;
        }
        if (s[i] != '1')
        {
            ans = s[i];
            break;
        }
    }
    cout << ans << endl;
}
