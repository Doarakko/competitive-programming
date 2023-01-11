#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            cout << '9';
        }
        else if (s[i] == '9')
        {
            cout << '1';
        }
    }
    cout << endl;
}
