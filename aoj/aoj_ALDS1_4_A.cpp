#include <iostream>
#include <stdio.h>

using namespace std;

int linearSearch(vector<int> v, int key)
{
    int i = 0;
    v[v.size() - 1] = key;

    while (v[i] != key)
    {
        i++;
    }
    if (i == v.size() - 1)
    {
        return -1;
    }

    return i;
}

int main()
{
    int n;
    cin >> n;
    vector<int> s(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int q;
    cin >> q;
    vector<int> t(q);
    for (int i = 0; i < q; i++)
    {
        cin >> t[i];
    }

    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        if (linearSearch(s, t[i]) != -1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}