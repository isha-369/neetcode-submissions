class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> freq(n+1,0);
        for(int i=0;i<trust.size();i++){
            int sec = trust[i][1];
            int first = trust[i][0];
            freq[sec]++;
            freq[first]--;
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};