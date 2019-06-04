#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;
    if (a <= 0 && b >= 0)
    {
        cout << "Zero" << endl;
    }
    else if (a > 0 || (b - a + 1) % 2 == 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }
}
