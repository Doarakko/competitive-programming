class Solution {
public:
    int arrangeCoins(int n) {
        int i;
        for(i = 1; ; i++){
            n -= i;
            if(n < 0){
                return i - 1;        
            }
        }
        return -1;
    }
};

// Binary Search
class Solution {
public:
    bool judge(long x, int n){
        x = (1 + x) * x / 2;
        return x > n;
    }
    
    int arrangeCoins(int n) {
        int l,r, mid;
        l = 0;
        r = n;
    
        while(l <= r){
            mid = (l + r) / 2;
            
            if(judge(mid, n)){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return l - 1;
    }
};

