class Solution {
   public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        std::stack<string> st;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                if (!st.empty()) {
                    int val1 = stoi(st.top());
                    st.pop();
                    int val2 = stoi(st.top());
                    st.pop();
                    st.push(to_string(val2));

                    st.push(to_string(val1));
                    st.push(to_string(val1 + val2));
                }

            } else if (operations[i] == "D") {
                if (!st.empty()) {
                    int val1 = stoi(st.top());
                    st.push(to_string(val1 * 2));
                }

            } else if (operations[i] == "C") {
                if (!st.empty()) {
                    st.pop();
                }

            } else {
                st.push(operations[i]);
            }
        }
        while (!st.empty()) {
            sum += stoi(st.top());
            st.pop();
        }
        return sum;
    }
};