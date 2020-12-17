class Solution {
public:
    string reverseDecimalToBinary(int x){
        string s = "";
        while (x > 0){
            s += to_string((x + 1) % 2);
            x /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    int binaryToDecimal(string s){
        reverse(s.begin(), s.end());
        int x = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                x += pow(2, i);
            }
        }
        return x;
    }
    
    int bitwiseComplement(int N) {
        if(N == 0){
            return 1;
        }
        return binaryToDecimal(reverseDecimalToBinary(N));
    }
};