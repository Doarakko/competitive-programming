#include <iostream>

using namespace std;

int main()
{
    int n;
    string str, s1, s2, tmp1, tmp2;
    set<string> train;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        train.clear();
        cin >> str;

        for (int j = 0; j < str.size() - 1; j++)
        {
            s1 = str.substr(0, j + 1);
            s2 = str.substr(j + 1, str.size() - 1);

            // s1 + s2
            tmp1 = s1;
            tmp2 = s2;
            train.insert(s1 + s2);

            // s1 + s2(反転)
            tmp1 = s1;
            tmp2 = s2;
            reverse(tmp2.begin(), tmp2.end());
            train.insert(tmp1 + tmp2);

            // s1(反転) + s2
            tmp1 = s1;
            tmp2 = s2;
            reverse(tmp1.begin(), tmp1.end());
            train.insert(tmp1 + tmp2);

            // s1(反転) + s2(反転)
            tmp1 = s1;
            tmp2 = s2;
            reverse(tmp1.begin(), tmp1.end());
            reverse(tmp2.begin(), tmp2.end());
            train.insert(tmp1 + tmp2);

            // s2 + s1
            tmp1 = s1;
            tmp2 = s2;
            train.insert(tmp2 + tmp1);

            // s2 + s1(反転)
            tmp1 = s1;
            tmp2 = s2;
            reverse(tmp1.begin(), tmp1.end());
            train.insert(tmp2 + tmp1);

            // s2(反転) + s1
            tmp1 = s1;
            tmp2 = s2;
            reverse(tmp2.begin(), tmp2.end());
            train.insert(tmp2 + tmp1);

            // s2(反転) + s1(反転)
            tmp1 = s1;
            tmp2 = s2;
            reverse(tmp1.begin(), tmp1.end());
            reverse(tmp2.begin(), tmp2.end());
            train.insert(tmp2 + tmp1);
        }
        // 出力
        cout << train.size() << endl;
    }
}
