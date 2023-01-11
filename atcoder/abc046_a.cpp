#include <iostream>
#include <vector>

#define vsort(v) sort((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    vsort(v);
    int cnt = 3;
    for (int i = 1; i < 3; i++)
    {
        if (v[i] == v[i - 1])
        {
            cnt--;
        }
    }
    cout << cnt << endl;
}
