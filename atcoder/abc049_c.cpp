#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    bool flag = true;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length() && flag; i++)
    {
        if (s[i] == 'm')
        {
            if (s.substr(i, 5) == "maerd")
            {
                i = i + 4;
            }
            else
            {
                flag = false;
            }
        }
        else if (s[i] == 'r')
        {
            if (s.substr(i, 7) == "remaerd")
            {
                i = i + 6;
            }
            else if (s.substr(i, 6) == "resare")
            {
                i = i + 5;
            }
            else
            {
                flag = false;
            }
        }
        else if (s[i] == 'e')
        {
            if (s.substr(i, 5) == "esare")
            {
                i = i + 4;
            }
            else
            {
                cout << i << endl;
                flag = false;
            }
        }
        else
        {
            flag = false;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
