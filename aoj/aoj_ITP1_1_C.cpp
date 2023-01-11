#include <iostream>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;

    int area, perimeter;
    area = a * b;
    perimeter = a * 2 + b * 2;
    cout << area << " " << perimeter << endl;
}
