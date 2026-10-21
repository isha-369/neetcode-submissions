class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int val1=stones[stones.size()-1];
            int val2=stones[stones.size()-2];
            if(val1==val2){
                stones.pop_back();
                stones.pop_back();
            } else if(val1>val2){
                int diff = val1-val2;
                stones.pop_back();
                stones.pop_back();
                stones.push_back(diff);
                
            }
        }
        if(stones.size()==1){
            return stones[0];
        } 
        return 0;
    }
};
