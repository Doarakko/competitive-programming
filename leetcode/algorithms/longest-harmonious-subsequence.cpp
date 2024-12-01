#include <algorithm>

class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] += 1;
        }

        int max = 0, cnt = 0, pre = 0;
        bool flag = false;
        for (const auto& [key, value] : m) {
            if (!flag) {
                pre = key;
                cnt = value;

                flag = true;
            } else if (key - pre == 1) {
                cnt += value;

                if (cnt > max) {
                    max = cnt;
                }

                pre = key;
                cnt = value;
            } else {
                pre = key;
                cnt = value;
            }
        }

        return max;
    }
};
