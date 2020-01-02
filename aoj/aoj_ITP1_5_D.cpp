#include <iostream>

using namespace std;

void call(int n)
{
    int i = 1;
    int x = i;
    while (x == 0)
    {
        if (x % 3 == 0)
        {
            cout << " " << i;
        }
        x /= 10;
    }
}

int main()
{
    int n;
    cin >> n;
    call(n);
}