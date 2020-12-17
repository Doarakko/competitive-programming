class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> v(S.length());
        int cnt = 0;
        bool is_C = false;
        // left
        for(int i = 0; i < S.length(); i++){
            if(S[i] == C){
                cnt = 0;
                is_C = true;
            }else{
                cnt++;
            }
            
            if(is_C){
                v[i] = cnt;
            }else{
                v[i] = INT_MAX;
            }
        }

        // right
        for(int i = S.length() - 1; i >= 0; i--){
            if(S[i] == C){
                cnt = 0;
            }else{
                cnt++;
            }
            v[i] = min(v[i], cnt);
        }
        return v;
    }
};
