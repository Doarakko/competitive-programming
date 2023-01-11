#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> v(3);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x <= a)
        {
            v[0]++;
        }
        else if (x >= a + 1 && x <= b)
        {
            v[1]++;
        }
        else
        {
            v[2]++;
        }
    }

    vsort(v);
    cout << v[0] << endl;
}
