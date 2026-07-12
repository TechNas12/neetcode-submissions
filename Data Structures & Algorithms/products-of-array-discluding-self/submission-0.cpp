class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        for(int i = 0; i < nums.size(); i++){
            int result = 1;
            for(int j = 0; j < nums.size();j++){
                if(i==j){
                    continue;
                }
                result *= nums[j];
            }
            output.push_back(result);
        }
        return output;
    }
};
