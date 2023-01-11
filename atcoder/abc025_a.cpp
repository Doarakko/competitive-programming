#include <iostream>

using namespace std;
int main(int argc, const char *argv[])
{
    string s;
    int n;
    cin >> s >> n;
    cout << s[(n - 1) / 5] << s[(n - 1) % 5] << endl;
}
