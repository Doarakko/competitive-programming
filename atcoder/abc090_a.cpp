#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    char C[3][3], x;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            C[i][j] = x;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << C[i][i];
    }
    cout << endl;

    return 0;
}
