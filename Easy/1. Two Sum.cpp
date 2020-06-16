class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int c = 0; c < nums.size(); c++){
                if(i == c){
                    continue;
                }
                if(nums.at(i) + nums.at(c) == target){
                    return {i, c};
                }
            }
        }
        return {0, 1};
    }
};