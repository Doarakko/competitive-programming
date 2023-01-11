#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'O':
            s[i] = '0';
            break;
        case 'D':
            s[i] = '0';
            break;
        case 'I':
            s[i] = '1';

            break;
        case 'Z':
            s[i] = '2';
            break;
        case 'S':
            s[i] = '5';
            break;
        case 'B':
            s[i] = '8';
            break;
        }
    }
    cout << s << endl;
}
