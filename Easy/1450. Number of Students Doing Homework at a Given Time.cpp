class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int num = 0;
        int studentCount = startTime.size();
        for(int i = 0; i < studentCount; i++){
            if(startTime[i] <= queryTime && endTime[i] >= queryTime){
                num += 1;
            }
        }
        return num;
    }
};