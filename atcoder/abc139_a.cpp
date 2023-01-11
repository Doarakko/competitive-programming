#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string a, b;
    cin >> a >> b;

    int cnt = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
