class Solution {
public:
    int reverse(int x) {
        int newNum = 0;
        while(x != 0){
            if(willOverflow(newNum, 10)){
                return 0;
            }
            newNum *= 10;
            int num = x - ((x / 10) * 10);
            newNum += num;
            x /= 10;
        }
        return newNum;
    }
    bool willOverflow(int a, int b){
        if(a == 0 || b == 0){
            return false;
        }
        long long al = (long long) a;
        long long bl = (long long) b;
        long long r = al * bl;
        if(abs(r) > (long long) INT_MAX){
            return true;
        }
        return false;
    }
};