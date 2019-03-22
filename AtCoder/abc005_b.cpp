#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int n, x, min = 101;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < min)
        {
            min = x;
        }
    }
    cout << min << endl;
}
