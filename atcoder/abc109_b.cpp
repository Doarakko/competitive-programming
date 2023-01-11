#include <iostream>
#include <set>

#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    set<string> st;
    string s;
    char c = '1';
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        st.insert(s);
        if (i != 0 && (s[0] != c || st.size() != i + 1))
        {
            flag = false;
        }
        c = s[s.length() - 1];
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
