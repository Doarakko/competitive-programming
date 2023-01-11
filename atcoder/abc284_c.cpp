#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> g;
vector<bool> vis;

void dfs(int x)
{
    vis[x] = true;
    for (int i = 0; i < g[x].size(); i++)
    {
        if (!vis[g[x][i]])
        {
            dfs(g[x][i]);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    g.resize(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        u--;
        v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int cnt = 0;
    vis.resize(n);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            dfs(i);
        }
    }

    cout << cnt << endl;
}
