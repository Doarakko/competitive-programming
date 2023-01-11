#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, tmp;
    int k;
    cin >> s >> k;
    if (s.length() < k)
    {
        cout << 0 << endl;
        return 0;
    }
    set<string> st;
    for (int i = 0; i + k <= s.length(); i++)
    {
        tmp = s.substr(i, k);
        //        cout << tmp << endl;
        st.insert(tmp);
    }
    cout << st.size() << endl;
}
