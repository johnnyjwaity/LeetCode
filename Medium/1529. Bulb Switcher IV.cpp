class Solution {
public:
    int minFlips(string target) {
        int flips = 0;
        for(int i = target.size() - 1; i >= 0; i--){
            char nextBulb = '0';
            if(i > 0 && target.at(i - 1) == '1') {
                nextBulb = '1';
            }
            if(target.at(i) != nextBulb){
                flips += 1;
            }
        }
        return flips;
    }
};