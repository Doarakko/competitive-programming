#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char *argv[])
{
    double h, bmi, w;
    cin >> h >> bmi;
    h /= 100;

    w = bmi * h * h;
    cout << setprecision(-2) << w << endl;
}
