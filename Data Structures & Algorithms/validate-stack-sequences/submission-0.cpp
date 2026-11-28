class Solution {
   public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j = 0;
        int i = 0;
        while (i < pushed.size() && j< popped.size()) {
            if (!st.empty()) {
                if (st.top() == popped[j]) {
                    j++;
                    st.pop();
                } else {
                    st.push(pushed[i]);
                    i++;
                }
            } else {
                st.push(pushed[i]);
                i++;
            }
        }
        while(j<popped.size() && st.top()==popped[j]){
            st.pop();
            j++;
        }
        if(i==pushed.size() && j==popped.size()){
            return true;
        }
        return false;
    }
};
