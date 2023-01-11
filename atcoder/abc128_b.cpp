#include <iostream>
#include <vector>

#define X first
#define Y second
#define P pair
#define vsort(v) sort(v.begin(), v.end())

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<P<P<string, int>, int>> v(n);
    P<string, int> p;
    for (int i = 0; i < n; i++)
    {
        cin >> p.X >> p.Y;
        p.Y *= -1;
        v[i].X = p;
        v[i].Y = i + 1;
    }
    vsort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].Y << endl;
    }
}