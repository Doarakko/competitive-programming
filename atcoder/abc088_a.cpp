#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, a;
    cin >> n >> a;

    n = n - (n / 500) * 500;

    if (n <= a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
