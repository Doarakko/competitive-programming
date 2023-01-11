#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, a, b, k, p;
    cin >> n >> a >> b >> k;

    set<int> st;
    st.insert(a);
    st.insert(b);

    for (int i = 0; i < k; i++)
    {
        cin >> p;
        st.insert(p);
    }
    if (st.size() == k + 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
