#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int d;
    cin >> d;
    switch (d)
    {
    case 25:
        cout << "Christmas" << endl;
        break;
    case 24:
        cout << "Christmas Eve" << endl;
        break;
    case 23:
        cout << "Christmas Eve Eve" << endl;
        break;
    case 22:
        cout << "Christmas Eve Eve Eve" << endl;
        break;
    }
}
