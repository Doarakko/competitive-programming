#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, const char *argv[])
{
    vector<double> x(3), y(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    // へロンの公式
    double S, s, a, b, c;
    a = sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1]));
    b = sqrt((x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2]));
    c = sqrt((x[1] - x[2]) * (x[1] - x[2]) + (y[1] - y[2]) * (y[1] - y[2]));
    s = (a + b + c) / 2;
    S = sqrt(s * (s - a) * (s - b) * (s - c));
    // cout << "a: " << a << " b: " << b << " c: " << c << " s: " << s << endl;
    printf("%.1f", S);
}
