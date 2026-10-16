class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    if (s[i] == ')') {
                        if (!st.empty() && st.top() == '(') {
                            st.pop();
                        } else
                            return false;
                    } else if (!st.empty() && s[i] == ']') {
                        if (st.top() == '[') {
                            st.pop();
                        } else
                            return false;

                    } else if (!st.empty() && s[i] == '}') {
                        if (st.top() == '{') {
                            st.pop();
                        } else
                            return false;
                    }
                } else {
                    st.push(s[i]);
                }
            }
        }
        return st.empty();
    }
};
