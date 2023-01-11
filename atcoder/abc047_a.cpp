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
    if (v[0] + v[1] == v[2])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
