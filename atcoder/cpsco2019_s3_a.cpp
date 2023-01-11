#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            cout << 'O';
        }
        else if (s[i] == 'O')
        {
            cout << 'A';
        }
        else
        {
            cout << s[i];
        }
    }
    cout << endl;
}
