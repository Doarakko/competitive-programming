#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define P pair

// stoi(s): string to int
// stod(s): string to double

// INT_MAX
// INT_MIN
// LLONG_MAX
// LLONG_MIN
// DBL_MIN
// DBL_MAX
// LDBL_MIN
// LDBL_MAX

// A-Z: 65~90
// a-z: 97~122
// |a-z| = 26

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    int cnt = 0, max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
        {
            cnt = 1;
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[j] == 'A' || s[j] == 'C' || s[j] == 'G' || s[j] == 'T')
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if (cnt > max)
            {
                max = cnt;
            }
        }
    }
    cout << max << endl;
}
