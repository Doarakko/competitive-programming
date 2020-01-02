#include <iostream>
using namespace std;
using ll = long long;

string solve(string s)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'S')
        {
            ans += 'E';
        }
        else
        {
            ans += 'S';
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    int n;
    string s, ans;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        ans = solve(s);

        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
}
