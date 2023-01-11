#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            s.erase(s.begin() + i, s.begin() + i + 1 + 1);
            cnt += 2;
            // cout << "i: " << i << " s: " << s << endl;
            i = max(i - 2, -1);
        }
    }
    cout << cnt << endl;
}
