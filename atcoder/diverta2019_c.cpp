#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a = 0, b = 0, ab = 0, cnt = 0;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == 'B' && s[s.length() - 1] == 'A')
        {
            ab++;
        }
        else if (s[0] == 'B')
        {
            b++;
        }
        else if (s[s.length() - 1] == 'A')
        {
            a++;
        }
        if (s.find("AB") != -1)
        {
            for (int j = 0; j < s.length() - 1; j++)
            {
                string x, y;
                x = s[j];
                y = s[j + 1];
                if (x + y == "AB")
                {
                    cnt++;
                }
            }
        }
    }
    // cout << "cnt:" << cnt << " a:" << a << " b:" << b << endl;
    if (ab >= 2)
    {
        cnt += ab - 1;
    }
    if (ab > 0 && a > 0)
    {
        a--;
        cnt++;
    }
    if (ab > 0 && b > 0)
    {
        b--;
        cnt++;
    }
    cnt += min(a, b);
    cout << cnt << endl;
}
