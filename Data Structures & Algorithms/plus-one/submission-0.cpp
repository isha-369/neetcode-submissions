class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        bool done=false;
        vector<int> vec;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int data = carry + digits[i];
            if(!done){
                data+=1;
                done=true;
            } 
            if(data<10){
                vec.push_back(data);
                carry=0;
            } else {
                carry=data/10;
                vec.push_back(data%10);
            }
        }
        if(carry){
            vec.push_back(1);
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
};
