#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    bool c = false, f = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'C')
        {
            c = true;
        }
        else if (s[i] == 'F' && c)
        {
            f = true;
            break;
        }
    }
    if (f && c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
