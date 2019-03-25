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
using namespace std;
int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;

    int ans;
    ans = abs(b - a);
    if (b > a)
    {
        ans = min(ans, a + abs(b - 9) + 1);
    }
    else
    {
        ans = min(ans, abs(a - 9) + 1 + b);
    }
    cout << ans << endl;
}
