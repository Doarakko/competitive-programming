#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int x;
    bool e[10] = {}, l[10] = {};
    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        e[x] = true;
    }

    int b;
    cin >> b;

    for (int i = 0; i < 6; i++)
    {
        cin >> x;
        l[x] = true;
    }

    int cnt;
    for (int i = 0; i < 10; i++)
    {
        if (e[i] && l[i])
        {
            cnt++;
        }
        else if (l[i])
        {
            x = i;
        }
    }

    int ans = 0;
    if (cnt == 6)
    {
        ans = 1;
    }
    else if (cnt == 5 && x == b)
    {
        ans = 2;
    }
    else if (cnt == 5)
    {
        ans = 3;
    }
    else if (cnt == 4)
    {
        ans = 4;
    }
    else if (cnt == 3)
    {
        ans = 5;
    }
    cout << ans << endl;
}
