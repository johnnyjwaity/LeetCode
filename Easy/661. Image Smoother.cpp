class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int height = M.size();
        int width;
        
        int runningAvg;
        int count;
        
        vector<vector<int>> newImage;
        for(int i = 0; i< height; i++){
            width = M[i].size();
            vector<int> row;
            for(int k = 0; k < width; k++){
                runningAvg = M[i][k];
                count = 1;
                for(int w = -1; w <= 1; w ++){
                    for(int h = -1; h <= 1; h ++){
                        if(w == 0 && h == 0){
                            continue;
                        }
                        if(k + w < 0 || k + w > width - 1 || i + h < 0 || i + h > height - 1){
                            continue;
                        }
                        runningAvg += M[i + h][k + w];
                        count += 1;
                    }
                }
                runningAvg /= count;
                row.push_back(runningAvg);
            }
            newImage.push_back(row);
        }
        return newImage;
    }
};