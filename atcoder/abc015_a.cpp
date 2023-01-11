#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    string a, b;
    cin >> a >> b;
    if (a.length() < b.length())
    {
        cout << b << endl;
    }
    else
    {
        cout << a << endl;
    }
}
