class Solution {
   public:
    void fill(vector<vector<int>>& image, int sr, int sc, int color, int orig) {
        if (sr < 0 || sr > image.size() - 1 || sc < 0 || sc > image[sr].size() - 1 ||
            image[sr][sc] != orig)
            return;
        image[sr][sc] = color;

        fill(image, sr + 1, sc, color, orig);
        fill(image, sr - 1, sc, color, orig);
        fill(image, sr, sc + 1, color, orig);
        fill(image, sr, sc - 1, color, orig);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        fill(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};