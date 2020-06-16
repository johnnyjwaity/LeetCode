class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        for(int i = 0; i < s.length(); i++){
            string cur = "";
            bool broke = false;
            for(int l = 1; l < s.length() - i + 1; l++){
                char addedChar = s.at(i + (l - 1));
                if(cur.find(addedChar) == -1){
                    cur += addedChar;
                }else{
                    if((l - 1) > longest){
                        longest = l - 1;
                    }
                    broke = true;
                    break;
                }
            }
            if(!broke){
                if(cur.length() > longest) {
                    longest = cur.length();
                }
            }
        }
        return longest;
    }
};