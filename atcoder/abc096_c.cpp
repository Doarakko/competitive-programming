#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
    int H, W;
    cin >> H >> W;
    vector<string> v(H), V(H);
    string s0, s1 = "";
    for (int i = 0; i < W; i++)
    {
        s1 += '.';
    }
    for (int i = 0; i < H; i++)
    {
        cin >> s0;
        v[i] = s0;
        V[i] = s1;
    }
    /*
    for (int i = 0; i < H; i++) {
        //cout << v[i] << endl;
        cout << V[i] << endl;
    }
     */
    bool flag = true;
    int dy[4] = {-1, 0, 0, 1};
    int dx[4] = {0, -1, 1, 0};
    for (int i = 0; i < H && flag; i++)
    {
        for (int j = 0; j < W && flag; j++)
        {
            int cnt = 0, cnt1 = 0;
            if (v[i][j] == '#')
            {
                cnt1++;
            }
            for (int k = 0; k < 4; k++)
            {
                if (i + dy[k] < H && j + dx[k] < W && i + dy[k] >= 0 && j + dx[k] >= 0)
                {
                    if (v[i + dy[k]][j + dx[k]] == '#')
                    {
                        cnt1++;
                    }
                }
            }
            // cout << cnt1 << endl;
            if (v[i][j] == '#')
            {
                if (cnt1 >= 2)
                {
                    if (v[i][j] == '#' && V[i][j] == '.')
                    {
                        cnt++;
                        V[i][j] = '#';
                    }
                    for (int k = 0; k < 4 && cnt < 2; k++)
                    {
                        if (i + dy[k] < H && j + dx[k] < W && i + dy[k] >= 0 && j + dx[k] >= 0)
                        {
                            if (v[i + dy[k]][j + dx[k]] == '#' && V[i + dy[k]][j + dx[k]] == '.')
                            {
                                V[i + dy[k]][j + dx[k]] = '#';
                                cnt++;
                            }
                        }
                    }
                }
            }

            /*
            for (int i = 0; i < H; i++) {
                //cout << v[i] << endl;
                cout << V[i] << endl;
            }
            cout << endl;
            */
        }
    }

    for (int i = 0; i < H && flag; i++)
    {
        if (v[i] != V[i])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
