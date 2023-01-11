#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n * a, b) << endl;
}
