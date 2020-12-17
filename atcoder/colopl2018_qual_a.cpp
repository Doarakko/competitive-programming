#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    string s;
    int a, b;
    cin >> a >> b >> s;
    if (s.length() >= a && s.length() <= b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
