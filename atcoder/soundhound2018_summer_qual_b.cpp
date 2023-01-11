#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, ans = "";
    int w;
    cin >> s >> w;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % w == 0)
        {
            ans.push_back(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
