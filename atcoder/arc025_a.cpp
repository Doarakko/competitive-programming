#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> d(7), j(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> d[i];
    }
    for (int i = 0; i < 7; i++)
    {
        cin >> j[i];
    }

    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        if (d[i] > j[i])
        {
            ans += d[i];
        }
        else
        {
            ans += j[i];
        }
    }
    cout << ans << endl;
}
