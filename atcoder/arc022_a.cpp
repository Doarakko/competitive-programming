#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    int idx = 0;
    for (int i = 0; i < s.length(); i++)
    {
        switch (idx)
        {
        case 0:
            if (s[i] == 'i' || s[i] == 'I')
            {
                idx = 1;
            }
            break;
        case 1:
            if (s[i] == 'c' || s[i] == 'C')
            {
                idx = 2;
            }
            break;
        case 2:
            if (s[i] == 't' || s[i] == 'T')
            {
                idx = 3;
            }
            break;
        }
    }

    if (idx == 3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
