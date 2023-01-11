#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

bool check(int x, vector<int> ng)
{
    if (x < 0)
    {
        return false;
    }
    for (int i = 0; i < 3; i++)
    {
        if (x == ng[i])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<int> ng(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> ng[i];
    }
    if (!check(n, ng))
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < 100 && n > 0; i++)
    {
        if (check(n - 3, ng))
        {
            n -= 3;
        }
        else if (check(n - 2, ng))
        {
            n -= 2;
        }
        else if (check(n - 1, ng))
        {
            n -= 1;
        }
        else
        {
            break;
        }
        // cout << "n: " << n << endl;
    }
    if (n == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
