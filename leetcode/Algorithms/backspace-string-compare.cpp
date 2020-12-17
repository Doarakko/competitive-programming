class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> x, y;

        for(int i = 0; i < S.length(); i++){
            if(S[i] != '#'){
                x.push(S[i]);
            }else if(x.size() != 0){
                x.pop();
            }
        }
        
        for(int i = 0; i < T.length(); i++){
            if(T[i] != '#'){
                y.push(T[i]);
            }else if(y.size() != 0){
                y.pop();
            }
        }
        
        if(x.size() != y.size()){
            return false;
        }
        
        
        for(int i = 0; i < x.size(); i++){
            if(x.top() != y.top()){
                return false;
            }
            x.pop();
            y.pop();
        }
        
        return true;
    }
};