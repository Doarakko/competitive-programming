#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>

#define X first
#define Y second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

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
    int n, a[3] = {0, 0, 1};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        switch (i % 3)
        {
        case 0:
            a[0] = (a[0] + a[1] + a[2]) % 10007;
            break;
        case 1:
            a[1] = (a[0] + a[1] + a[2]) % 10007;
            break;
        case 2:
            a[2] = (a[0] + a[1] + a[2]) % 10007;
            break;
        }
    }
    cout << a[n % 3] << endl;
}
