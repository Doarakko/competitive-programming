#include <iostream>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a;
    cin >> n >> a;
    cout << n * n - a << endl;
    return 0;
}
