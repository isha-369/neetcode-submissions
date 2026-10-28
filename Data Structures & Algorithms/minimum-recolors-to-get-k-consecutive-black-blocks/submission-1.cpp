class Solution {
   public:
    int minimumRecolors(string blocks, int k) {
        int final = INT_MAX;
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] != 'B') {
                count++;
            }
        }
        final = min(final, count);
        for (int i = 1; i <= blocks.size() - k; i++) {
            if (blocks[i - 1] == 'W') {
                count--;
            }
            if (blocks[i + k - 1] == 'W') {
                count++;
            }
            final = min(final, count);
        }
        return final;
    }
};