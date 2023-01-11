#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    string s, t;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        if (s.substr(i, n - i) == t.substr(0, n - i))
        {
            cout << n + i << endl;
            return 0;
        }
    }
    cout << n * 2 << endl;
}
