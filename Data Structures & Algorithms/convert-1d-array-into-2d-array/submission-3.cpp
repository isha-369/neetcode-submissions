class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> vec;
        if(original.size()!=m*n) return vec;
        int k=0;
        for(int i=0;i<m;i++){
            vector<int> res;
            for(int j=0;j<n;j++){
                res.push_back(original[k]);
                k++;
            }
            vec.push_back(res);
        }
        return vec;
    }
};
