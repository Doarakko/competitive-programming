#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, x, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 1)
        {
            cnt++;
        }
    }

    if (cnt % 2 == 0 || cnt == 1 && n == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
