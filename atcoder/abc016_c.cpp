#include <iostream>
#include <set>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n, m, a, b;
    cin >> n >> m;
    bool x[10][10] = {};
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        x[a - 1][b - 1] = true;
        x[b - 1][a - 1] = true;
    }

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.clear();
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] && j != i)
            {
                for (int k = 0; k < n; k++)
                {
                    if (x[j][k] && !x[i][k] && k != j && k != i)
                    {
                        st.insert(k);
                    }
                }
            }
        }
        cout << st.size() << endl;
    }
}
