#include <iostream>
#include <vector>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define P pair
#define vmax_p(v) max_element(v.begin(), v.end())
#define vmin_p(v) min_element(v.begin(), v.end())
#define vmax_idx(v) distance(v.begin(), vmax_p(v))
#define vmin_idx(v) distance(v.begin(), vmin_p(v))

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> v(4);
    for (int i = 0; i < n; i++)
    {
        v[s[i] - '0' - 1]++;
    }
    cout << *vmax_p(v) << ' ' << *vmin_p(v) << endl;
    cout << vmax_idx(v) << ' ' << vmin_idx(v) << endl;
}
