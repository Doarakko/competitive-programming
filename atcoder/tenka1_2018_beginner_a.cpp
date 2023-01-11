#include <iostream>

#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    if (s.length() == 2)
    {
        cout << s << endl;
    }
    else
    {
        vrev(s);
        cout << s << endl;
    }
}
