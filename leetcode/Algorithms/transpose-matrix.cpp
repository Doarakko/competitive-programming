class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> v;
        vector<int> w;
        for(int i = 0; i < A[0].size(); i++){
            w.clear();
            for(int j = 0; j < A.size(); j++){
                w.push_back(A[j][i]);
            } 
            v.push_back(w);
        }        
        return v;
    }
};