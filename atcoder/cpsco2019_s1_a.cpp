#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a;
    cin >> n >> a;
    cout << ceil(a / 3.0) << ' ' << min(n / 3, a) << endl;
}
