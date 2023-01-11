#include <iostream>
#include <vector>
#include <set>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;

    vector<string> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            st.insert(v[j][i]);
        }
        cnt += st.size() - 1;
        st.clear();
    }
    cout << cnt << endl;
}
