class Solution {
   public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res;
        for (int i = 0; i < img.size(); i++) {
            vector<int> vec;
            for (int j = 0; j < img[i].size(); j++) {
                int arr[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
                int count = 0;
                int sum = 0;
                for (int k = 0; k < 8; k++) {
                    int row = i + arr[k][0];
                    int col = j + arr[k][1];
                    if (row >= 0 && col >= 0 && row < img.size() && col < img[i].size()) {
                        count++;
                        sum += img[row][col];
                    }
                }
                count++;
                sum+=img[i][j];
                int data = sum / count;
                vec.push_back(data);
            }
            res.push_back(vec);
        }
        return res;
    }
};
