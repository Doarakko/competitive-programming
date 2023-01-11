#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    for (int i = s.length() - 1; i > 0; i--)
    {
        if (s[i] == 'A' && s[i - 1] == 'W')
        {
            s[i] = 'C';
            s[i - 1] = 'A';
        }
    }
    cout << s << endl;
}
