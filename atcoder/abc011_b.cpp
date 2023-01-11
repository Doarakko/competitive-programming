#include <iostream>
#include <ctype.h>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            cout << (char)toupper(s[i]);
        }
        else
        {
            cout << (char)tolower(s[i]);
        }
    }
    cout << endl;
}
