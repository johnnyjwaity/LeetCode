class Solution {
public:
    bool isPowerOfTwo(int n) {
        int num = 1;
        while(true){
            if(num == n){
                return true;
            }
            if(num > n){
                return false;
            }
            if(num <= (INT_MAX / 2)){
                num *= 2;
            }else{
                return false;
            }
        }
    }
};