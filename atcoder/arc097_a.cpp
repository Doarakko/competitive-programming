#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s;
    int k;
    cin >> s >> k;
    set<string> st;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j + i <= s.length(); j++)
        {
            st.insert(s.substr(j, i));
        }
    }
    auto it = st.begin();
    for (int i = 0; i < k - 1; i++)
    {
        it++;
    }
    cout << *it << endl;
}
