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

#define P pair
#define X first
#define Y second
#define VSORT(v) sort(v.begin(), v.end())
#define VREV(v) reverse(v.begin(), v.end())
#define VMAX_P(v) max_element(v.begin(), v.end())
#define VMIN_P(v) min_element(v.begin(), v.end())
#define VMAX_IDX(v) distance(v.begin(), VMAX_P(v))
#define VMIN_IDX(v) distance(v.begin(), VMIN_P(v))
#define VCOPY(src, dst) copy(src.begin(), src.end(), back_inserter(dst))
#define SUPPER(src, dst) transform(src.begin(), src.end(), dst.begin(), toupper);
#define SLOWER(src, dst) transform(src.begin(), src.end(), dst.begin(), tolower);

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {

        sum += v[i];
        if (i > 2)
        {
            sum -= v[i - 3];
        }

        if (i >= 2 && sum < k)
        {

            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}
