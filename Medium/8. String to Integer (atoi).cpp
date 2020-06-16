class Solution {
public:
    int myAtoi(string str) {
        int len = str.size();
        int num = 0;
        bool neg = false;
        bool onlyNums = false;
        for(int i = 0; i < len; i++){
            int l = str.at(i);
            if(l >= 48 && l <= 57){
                onlyNums = true;
                long long n = (long long) num;
                n *= 10;
                n += ((long long)l) - 48;
                if(neg){
                    n *= -1;
                }
                if(n >= (long long)INT_MAX){
                    return INT_MAX;
                }else if(n <= (long long)INT_MIN){
                    return INT_MIN;
                }
                num *= 10;
                num += l - 48;
            }else if(onlyNums){
                break;
            }else if(l == 32){
                continue;
            }else if(l == 43){
                onlyNums = true;
            }else if(l == 45 && num == 0){
                onlyNums = true;
                neg = true;
            }else{
                break;
            }
        }
        if(neg){
            num *= -1;
        }
        return num;
    }
};