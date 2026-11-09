class Solution {
public:
    void flood(vector<vector<int>>& image, int i, int j, int color, int start){
        if(i<0 || j <0 || i>=image.size() || j>=image[i].size() || image[i][j]!=start || image[i][j]==color) {
            return;
        }
        image[i][j]=color;
        flood(image, i-1 , j , color, start);
        flood(image, i+1 , j , color, start);
        flood(image, i , j-1 , color, start);
        flood(image, i , j+1 , color, start);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }
        flood(image, sr,sc,color,image[sr][sc]);
        return image;
    }
};