class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;
        n--;
        for (int i = nums1.size() - 1; i >= 0; i--) {
            int data1 = INT_MIN;
            int data2 = INT_MIN;

            if (m >= 0) {
                data1 = nums1[m];
                // m--;
            }
            if (n >= 0) {
                data2 = nums2[n];
                // n--;
            }

            if (data1 > data2) {
                nums1[i] = data1;
                m--;
            } else {
                nums1[i] = data2;
                n--;
            }
        }
    }
};