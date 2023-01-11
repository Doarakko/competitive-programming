#include <iostream>
#include <algorithm>
#include <vector>

#define vsort(v) sort(v.begin(), v.end())

using namespace std;

int main(int argc, const char *argv[])
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    vsort(v);
    cout << v[1] << endl;
}
