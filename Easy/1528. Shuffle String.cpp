class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string newString = s + "";
        for(int i = 0; i < indices.size(); i++){
            newString[indices[i]] = s[i];
        }
        return newString;
    }
};