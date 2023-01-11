#include <iostream>
using namespace std;
int main(int argc, const char *argv[])
{
    int s, e, ans = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> s >> e;
        ans += s * e * 0.1;
    }
    cout << ans << endl;
}
