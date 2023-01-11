#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, ans = 0;
    string s1, s2 = "b";
    cin >> n >> s1;
    for (int i = 1; s2.length() < s1.length(); i++)
    {
        if (i % 3 == 1)
        {
            s2 = 'a' + s2 + 'c';
        }
        else if (i % 3 == 2)
        {
            s2 = 'c' + s2 + 'a';
        }
        else
        {
            s2 = 'b' + s2 + 'b';
        }
        ans = i;
    }
    if (s1 == s2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
