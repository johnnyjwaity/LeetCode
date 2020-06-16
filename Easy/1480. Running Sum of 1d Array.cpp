class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int curSum = 0;
        vector<int> sums;
        for(int i = 0; i < nums.size(); i++){
            curSum += nums[i];
            sums.push_back(curSum);
        }
        return sums;
    }
};