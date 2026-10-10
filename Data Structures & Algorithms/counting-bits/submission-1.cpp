class Solution {
   public:
    int count(int num) {
        int val = 0;

        while (num) {
            int data = num & 1;
            if (data == 1) {
                val++;
            }
            num = num >> 1;
        }
        return val;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i <= n; i++) {
            res.push_back(count(i));
        }
        return res;
    }
};
