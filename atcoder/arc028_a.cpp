#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, a, b;
    cin >> n >> a >> b;
    n %= (a + b);
    if (n <= a && n >= 1)
    {
        cout << "Ant" << endl;
    }
    else
    {
        cout << "Bug" << endl;
    }
}
