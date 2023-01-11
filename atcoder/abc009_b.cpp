#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, x;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
    }
    cout << *(-- --st.end()) << endl;
}
