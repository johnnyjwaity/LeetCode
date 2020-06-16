class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }else if(x < 10){
            return true;
        }
        int wX = x;
        int num = 0;
        while(wX > 0){
            int lastDegit = (wX - ((wX / 10) * 10));
            if(num > INT_MAX / 10){
                return false;
            }
            num *= 10;
            num += lastDegit;
            wX /= 10;
        }
        if(num == x){
            return true;
        }
        return false;
    }
};