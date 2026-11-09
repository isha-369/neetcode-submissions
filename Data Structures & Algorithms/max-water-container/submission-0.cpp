class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j = heights.size()-1;
        int maxi=INT_MIN;
        while(i<j){
            int height = min(heights[i],heights[j]);
            int width = j-i;
            int area = height*width;
            maxi=max(maxi, area);
            if(heights[i]>heights[j]){
                j--;
            } else {
                i++;
            }
        }
        return maxi;
    }
};
