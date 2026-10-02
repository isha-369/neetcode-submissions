class Solution {
public:
    int count(int n){
        int res=0;
        while(n){
            n=n&(n-1);
            res++;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> vec;
        for(int i=0;i<=n;i++){
            vec.push_back(count(i));
        }
        return vec;
    }
};
