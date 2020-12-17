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

void displayVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

int binarySearch(vector<int> v, int target)
{
    int left = -1;
    int right = v.size();

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;

        if (v[mid] >= target)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    if (right < v.size() && v[right] == target)
    {
        return right;
    }
    return -1;
}

int main(int argc, const char *argv[])
{
    int x;
    bool e[10] = {}, l[10] = {};
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        e[x] = true;
    }

    int b;
    cin >> b;

    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        l[x]++;
    }

    int cnt;
    for (int i = 0; i < 10; i++)
    {
        if (e[i] && l[i])
        {
            cnt++;
        }
        else if (l[i])
        {
            x = i;
        }
    }

    int ans = 0;
    if (cnt == 6)
    {
        ans = 1;
    }
    else if (cnt == 5 && x == b)
    {
        ans = 2;
    }
    else if (cnt == 5)
    {
        ans = 3;
    }
    else if (cnt == 4)
    {
        ans = 4;
    }
    else if (cnt == 3)
    {
        ans = 5;
    }
    cout << ans << endl;
}
