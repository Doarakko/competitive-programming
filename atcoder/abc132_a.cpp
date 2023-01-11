#include <iostream>
#define VSORT(v) sort(v.begin(), v.end())

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    VSORT(s);
    if (s[0] == s[1] && s[2] == s[3] && s[0] != s[2])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
