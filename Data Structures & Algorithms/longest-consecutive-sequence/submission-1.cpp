class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        if(nums.size()==0) return 0;
        int maxi = 1;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)==st.end()){
                int data = nums[i]+1;
                while(st.find(data)!=st.end()){
                    data++;
                }
                maxi=max(maxi,data-nums[i]);
            }
        }
        return maxi;
    }
};
