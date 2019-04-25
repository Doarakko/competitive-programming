#include <iostream>
#include <iomanip>
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
#define vmax_p(v) max_element(v.begin(), v.end())
#define vmin_p(v) min_element(v.begin(), v.end())
#define vmax_idx(v) distance(v.begin(), vmax_p(v))
#define vmin_idx(v) distance(v.begin(), vmin_p(v))
#define vcopy(src, dst) copy(src.begin(), src.end(), back_inserter(dst))
#define P pair

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, N;
    cin >> m >> n >> N;

    int collect, ans = N;
    for (; N >= m;)
    {
        collect = (N / m) * n;
        ans += collect;

        N = collect + N % m;
    }
    cout << ans << endl;
}
