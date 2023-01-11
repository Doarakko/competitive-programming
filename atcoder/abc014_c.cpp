#include <iostream>
#include <vector>

#define VMAX_IDX(v) distance(v.begin(), VMAX_P(v))
#define VMAX_P(v) max_element(v.begin(), v.end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b;
    cin >> n;
    int A[1000001] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        A[a]++;
        A[b + 1]--;
    }
    vector<int> v(1000001);
    v[0] = A[0];
    for (int i = 1; i < 1000001; i++)
    {
        v[i] = v[i - 1] + A[i];
    }
    cout << v[VMAX_IDX(v)] << endl;
}
