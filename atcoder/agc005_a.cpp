#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string x;
    cin >> x;
    int s = 0, t = 0, cnt = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'S')
        {
            s++;
        }
        else
        {
            t++;
        }
        if (s > 0 && t > 0)
        {
            s--;
            t--;
        }
        else if (s < t)
        {
            cnt++;
            t = 0;
        }
    }
    cnt += s;
    cout << cnt << endl;
}
