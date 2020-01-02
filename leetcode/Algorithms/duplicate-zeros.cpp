class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        auto it = arr.begin();
        int n = arr.size(), cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                it = arr.insert(it, 0);
                i++;
                it++;
                cnt++;
            }
            it++;
        }
        
        for(int i = 0; i < cnt; i++){
            arr.pop_back();
        }
    }
};