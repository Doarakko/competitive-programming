#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            x++;
        }
        else if (s[i] == 'D')
        {
            x--;
        }
        if (max < x)
        {
            max = x;
        }
    }
    cout << max << endl;
}
