#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    char pre = s[0];
    bool flag = true;
    for (int i = 1; i < 4; i++)
    {
        if (pre != s[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "SAME" << endl;
    }
    else
    {
        cout << "DIFFERENT" << endl;
    }
}
