#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int max = -1, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= max)
        {
            cnt++;
            max = v[i];
        }
    }
    cout << cnt << endl;
}
