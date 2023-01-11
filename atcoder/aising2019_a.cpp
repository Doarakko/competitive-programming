#include <iostream>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, h, w;
    cin >> n >> h >> w;

    cout << (n - h + 1) * (n - w + 1) << endl;
}
