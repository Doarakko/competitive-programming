#include <iostream>
#include <stdio.h>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int d, r;
    double f;
    d = a / b;
    r = a % b;
    f = 1.0 * a / b;

    printf("%d %d %f\n", d, r, f);
}