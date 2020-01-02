#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <bitset>

using namespace std;
int main(int argc, const char *argv[])
{
    char c, d;
    int a, b;
    cin >> c >> a >> d >> b;
    if (c == d)
    {
        cout << abs(a - b) / 15 << endl;
    }
    else
    {
        cout << (a + b) / 15 << endl;
    }
}
