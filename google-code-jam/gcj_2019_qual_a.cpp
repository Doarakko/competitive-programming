#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;

        string s = to_string(n);
        ll a = 0, b = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '4')
            {
                b += pow(10, s.length() - (j + 1));
            }
            // cout << a << ' ' << b << endl;
        }
        a = n - b;
        cout << "Case #" << i + 1 << ": " << a << ' ' << b << endl;
    }
}
