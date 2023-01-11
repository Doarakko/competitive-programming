#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    int r, c;
    cin >> r >> c;

    if (r == 1 || r == 15 || c == 1 || c == 15)
    {
        cout << "black" << endl;
    }
    else if ((r == 3 || r == 13) && c >= 3 && c <= 13)
    {
        cout << "black" << endl;
    }
    else if ((r == 5 || r == 11) && c >= 5 && c <= 11)
    {
        cout << "black" << endl;
    }
    else if ((r == 7 || r == 9) && c >= 7 && c <= 9)
    {
        cout << "black" << endl;
    }
    else
    {
        cout << "white" << endl;
    }
}
