#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b, sum = 0, tmp;
    cin >> n >> a >> b;
    string s;
    for (int i = 1; i <= n; i++)
    {
        s.clear();
        tmp = 0;
        s = to_string(i);
        for (int j = 0; j < s.length(); j++)
        {
            tmp += s[j] - '0';
        }
        if (tmp >= a && tmp <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
