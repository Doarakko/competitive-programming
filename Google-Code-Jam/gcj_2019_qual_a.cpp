#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <bitset>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define P pair

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
