class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> vec;
        for(int i=0;i<=rowIndex;i++){
            vector<int> vec1(i+1,1);
            for(int j=1;j<i;j++){
                vec1[j]=vec[i-1][j-1]+vec[i-1][j];
            }
            vec.push_back(vec1);
        }
        return vec[rowIndex];
    }
};