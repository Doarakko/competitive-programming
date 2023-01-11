#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    if (s.substr(0, 3) == "yah" && s[3] == s[4])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
