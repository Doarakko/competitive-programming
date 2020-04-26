#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    string a, b;
    cin >> a >> b;

    int x, y;
    x = stoi(a);
    y = stoi(b);

    string s, t;
    for (int i = 0; i < y; i++)
    {
        s += a;
    }

    for (int i = 0; i < x; i++)
    {
        t += b;
    }

    if (s <= t)
    {
        cout << s << endl;
    }
    else
    {
        cout << t << endl;
    }
}