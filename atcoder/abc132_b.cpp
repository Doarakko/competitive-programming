#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i < 2)
        {
            continue;
        }
        if (v[i - 1] != min(v[i], min(v[i - 1], v[i - 2])) && v[i - 1] != max(v[i], max(v[i - 1], v[i - 2])))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
