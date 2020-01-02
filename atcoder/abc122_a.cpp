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
    char c;
    cin >> c;
    switch (c)
    {
    case 'A':
        cout << 'T' << endl;
        break;
    case 'C':
        cout << 'G' << endl;
        break;
    case 'G':
        cout << 'C' << endl;
        break;
    case 'T':
        cout << 'A' << endl;
        break;
    }
}
