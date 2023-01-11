#include <iostream>

using namespace std;

int main()
{
    int sx, sy;
    int tx, ty;
    vector<int> v;

    // 入力
    cin >> sx >> sy >> tx >> ty;

    // 1往復目
    //(sx, sy)から(tx, ty)へ
    // 右へ移動
    for (int i = sx; i < tx; i++)
    {
        cout << 'R';
    }
    // 上へ移動
    for (int i = sy; i < ty; i++)
    {
        cout << 'U';
    }
    //(tx, ty)から(sx, sy)へ
    // 左へ移動
    for (int i = sx; i < tx; i++)
    {
        cout << 'L';
    }
    // 下へ移動
    for (int i = sy; i < ty; i++)
    {
        cout << 'D';
    }

    // 2往復目
    //(sx, sy)から(tx, ty)へ
    // 右へ移動
    cout << 'D';
    for (int i = sx; i < tx + 1; i++)
    {
        cout << 'R';
    }
    // 上へ移動
    for (int i = sy; i < ty + 1; i++)
    {
        cout << 'U';
    }
    cout << 'L';
    //(tx, ty)から(sx, sy)へ
    // 左へ移動
    cout << 'U';
    for (int i = sx; i < tx + 1; i++)
    {
        cout << 'L';
    }
    // 下へ移動
    for (int i = sy; i < ty + 1; i++)
    {
        cout << 'D';
    }
    cout << 'R';

    cout << endl;

    return 0;
}
