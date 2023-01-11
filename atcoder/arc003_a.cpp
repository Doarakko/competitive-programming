#include <iostream>
#include <iomanip>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    string s;
    cin >> n >> s;

    double ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'A':
            ans += 4;
            break;
        case 'B':
            ans += 3;
            break;
        case 'C':
            ans += 2;
            break;
        case 'D':
            ans += 1;
        }
    }
    ans /= s.length();
    cout << setprecision(10) << ans << endl;
}
