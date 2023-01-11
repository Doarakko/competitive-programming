#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, ans = 0;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "TAKAHASHIKUN" || s == "Takahashikun" || s == "takahashikun")
        {
            ans++;
        }
        else if (i == n - 1)
        {
            if (s == "TAKAHASHIKUN." || s == "Takahashikun." || s == "takahashikun.")
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}