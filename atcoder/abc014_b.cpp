#include <iostream>

#define vrev(v) reverse(v.begin(), v.end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n >> x;

    string s = bitset<20>(x).to_string();
    vrev(s);
    int sum = 0, a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (s[i] == '1')
        {
            sum += a;
        }
    }
    cout << sum << endl;
}
