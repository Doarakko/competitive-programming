#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    ll n;
    string s;
    cin >> n;
    s = to_string(n);

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    if (n % sum == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
