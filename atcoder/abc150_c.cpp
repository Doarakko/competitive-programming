#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    string a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        a += c;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        b += c;
    }

    string s;
    int x, y, i = 0;
    do
    {
        for (int j = 0; j < n; j++)
        {
            s += to_string(v[j]);
        }

        if (s == a)
        {
            x = i + 1;
        }
        if (s == b)
        {
            y = i + 1;
        }

        s.clear();
        i++;
    } while (next_permutation(v.begin(), v.end()));

    cout << abs(x - y) << endl;
}