#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (4 * i + 7 * j == n)
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
