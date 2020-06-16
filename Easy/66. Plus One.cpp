class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int numLength = digits.size();
        bool carryOver = true;
        for(int i = numLength - 1; i >= 0; i--){
            if(carryOver){
                digits[i] += 1;
                carryOver = false;
            }
            if(digits[i] >= 10){
                digits[i] = 0;
                carryOver = true;
            }else{
                break;
            }
        }
        if(carryOver){
            vector<int> newNums;
            newNums.push_back(1);
            for(int i = 0; i < numLength; i++){
                newNums.push_back(0);
            }
            return newNums;
        }
        return digits;
    }
};