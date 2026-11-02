class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool dec=false;
        bool inc=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                if(!dec){
                    inc=true;
                } else return false;
            } else if (nums[i+1]<nums[i]){
                if(!inc){
                    dec=true;
                } else return false;
            }
        }
        return true;
    }
};