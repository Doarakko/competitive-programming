#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int n, t;
    cin >> n >> t;

    int x, sum = 0, pre = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0 || x >= pre + t)
        {
            sum += t;
        }
        else
        {
            sum += x - pre;
        }
        pre = x;
        // cout << "x: " << x << " sum: " << sum << endl;
    }
    cout << sum << endl;
}
