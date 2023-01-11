#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    char c;
    cin >> c;
    switch (c)
    {
    case 'A':
        cout << 'T' << endl;
        break;
    case 'C':
        cout << 'G' << endl;
        break;
    case 'G':
        cout << 'C' << endl;
        break;
    case 'T':
        cout << 'A' << endl;
        break;
    }
}
