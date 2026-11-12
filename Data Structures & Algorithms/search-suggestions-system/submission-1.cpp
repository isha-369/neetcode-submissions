class Solution {
   public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> res;
        for (int i = 0; i < searchWord.size(); i++) {
            int j = 0;
            int count = 0;
            string search = searchWord.substr(0, i + 1);
            vector<string> vec;
            while (j < products.size() && count < 3) {
                string word = products[j];
                if (search.size() > word.size()) {
                    j++;
                    continue;
                }
                if (word.substr(0, search.size()) == search) {
                    count++;
                    vec.push_back(products[j]);
                }
                j++;
            }
            res.push_back(vec);
        }
        return res;
    }
};
