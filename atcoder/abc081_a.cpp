#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
