class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> freq(grid.size()*grid[0].size()+1,0);
        vector<int> res;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int num=grid[i][j];
                freq[num]++;
            }
        }
        int dup=0;
        int mis=0;
        for(int i=1;i<freq.size();i++){
            if(freq[i]==2){
                dup=i;
            } else if(freq[i]==0){
                mis=i;
            }
        }
        res.push_back(dup);
        res.push_back(mis);
        return res;
    }
};