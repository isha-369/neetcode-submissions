class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k){
            sort(gifts.begin(),gifts.end());
            gifts[gifts.size()-1]=std::sqrt(gifts[gifts.size()-1]);
            k--;
        }
        int sum=0;
        for(int i=0;i<gifts.size();i++){
            sum+=gifts[i];
        }
        return sum;
    }
};