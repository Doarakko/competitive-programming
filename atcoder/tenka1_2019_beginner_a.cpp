#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c > a && c < b || c > b && c < a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
