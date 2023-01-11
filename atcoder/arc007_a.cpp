#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    char x;
    string s;
    cin >> x >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != x)
        {
            cout << s[i];
        }
    }
    cout << endl;
}
