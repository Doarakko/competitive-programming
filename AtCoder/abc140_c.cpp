#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
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

int countDays(int year, int month, int day)
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = day;

    if (month == 1)
    {
        return cnt;
    }

    for (int i = 0; i < month - 1; i++)
    {
        cnt += days[i];
    }

    if (month >= 3 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
    {
        cnt++;
    }

    return cnt;
}

int main(int argc, const char *argv[])
{
    int n;
    vector<int> a(n), b(n - 1);

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    a[0] = b[0];
    a[n - 1] = b[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        a[i] = min(b[i], b[i - 1]);
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
}
