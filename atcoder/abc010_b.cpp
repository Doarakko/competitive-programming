#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int n, a, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            if (a % 2 == 0 || a % 3 == 2)
            {
                cnt++;
                a--;
            }
            else
            {
                break;
            }
        }
        // cout << cnt << endl;
    }
    cout << cnt << endl;
}
