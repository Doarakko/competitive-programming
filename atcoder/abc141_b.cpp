#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            if (!(s[i] == 'R' || s[i] == 'U' || s[i] == 'D'))
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (!(s[i] == 'L' || s[i] == 'U' || s[i] == 'D'))
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
