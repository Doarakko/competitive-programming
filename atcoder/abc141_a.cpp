#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;
    if (s == "Sunny")
    {
        cout << "Cloudy" << endl;
    }
    else if (s == "Cloudy")
    {
        cout << "Rainy" << endl;
    }
    else
    {
        cout << "Sunny" << endl;
    }
}
