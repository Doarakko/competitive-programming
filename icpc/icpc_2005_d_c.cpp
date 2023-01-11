#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    string s1, s2, sum_string;
    int num1, num2, sum_num;
    string ans;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // 初期化
        s1.clear();
        s2.clear();
        sum_string.clear();
        num1 = 0;
        num2 = 0;
        sum_num = 0;
        ans.clear();

        // 入力
        cin >> s1 >> s2;

        // s1を数字に変換
        for (int j = 0; j < s1.size(); j++)
        {
            if (s1[j] == 'm')
            {
                num1 += 1000;
            }
            else if (s1[j] == 'c')
            {
                num1 += 100;
            }
            else if (s1[j] == 'x')
            {
                num1 += 10;
            }
            else if (s1[j] == 'i')
            {
                num1 += 1;
            }
            else
            {
                if (s1[j + 1] == 'm')
                {
                    num1 += ((s1[j] - '0') * 1000);
                }
                else if (s1[j + 1] == 'c')
                {
                    num1 += ((s1[j] - '0') * 100);
                }
                else if (s1[j + 1] == 'x')
                {
                    num1 += ((s1[j] - '0') * 10);
                }
                else if (s1[j + 1] == 'i')
                {
                    num1 += ((s1[j] - '0') * 1);
                }
                j++;
            }
        }
        // s2を数字に変換
        for (int j = 0; j < s2.size(); j++)
        {
            if (s2[j] == 'm')
            {
                num2 += 1000;
            }
            else if (s2[j] == 'c')
            {
                num2 += 100;
            }
            else if (s2[j] == 'x')
            {
                num2 += 10;
            }
            else if (s2[j] == 'i')
            {
                num2 += 1;
            }
            else
            {
                if (s2[j + 1] == 'm')
                {
                    num2 += ((s2[j] - '0') * 1000);
                }
                else if (s2[j + 1] == 'c')
                {
                    num2 += ((s2[j] - '0') * 100);
                }
                else if (s2[j + 1] == 'x')
                {
                    num2 += ((s2[j] - '0') * 10);
                }
                else if (s2[j + 1] == 'i')
                {
                    num2 += ((s2[j] - '0') * 1);
                }
                j++;
            }
        }

        // 和
        sum_num = num1 + num2;
        // 和を文字列に変換
        sum_string = to_string(sum_num);
        for (int j = 0; j < sum_string.size(); j++)
        {
            if (sum_string[j] == '1')
            {
                if (sum_string.size() - j == 4)
                {
                    ans.push_back('m');
                }
                else if (sum_string.size() - j == 3)
                {
                    ans.push_back('c');
                }
                else if (sum_string.size() - j == 2)
                {
                    ans.push_back('x');
                }
                else if (sum_string.size() - j == 1)
                {
                    ans.push_back('i');
                }
            }
            else if (sum_string[j] != '0')
            {
                ans.push_back(sum_string[j]);
                if (sum_string.size() - j == 4)
                {
                    ans.push_back('m');
                }
                else if (sum_string.size() - j == 3)
                {
                    ans.push_back('c');
                }
                else if (sum_string.size() - j == 2)
                {
                    ans.push_back('x');
                }
                else if (sum_string.size() - j == 1)
                {
                    ans.push_back('i');
                }
            }
        }
        // 出力
        cout << ans << endl;
    }

    return 0;
}
