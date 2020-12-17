#include <iostream>
#include <vector>
#include <algorithm>

#define vsort(v) sort(v.begin(), v.end())

using namespace std;
int main(int argc, const char *argv[])
{
    int l, r;
    cin >> l >> r;
    vector<int> x(l), y(r);
    for (int i = 0; i < l; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < r; i++)
    {
        cin >> y[i];
    }
    vsort(x);
    vsort(y);
    int idx = 0, cnt = 0;
    for (int i = 0; i < l; i++)
    {
        for (int j = idx; j < r; j++)
        {
            if (x[i] == y[j])
            {
                cnt++;
                idx = j + 1;
                break;
            }
            else if (x[i] < y[j])
            {
                idx = j;
                break;
            }
        }
    }
    cout << cnt << endl;
}
