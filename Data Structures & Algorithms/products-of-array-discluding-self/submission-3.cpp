class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> prefix(length);
        vector<int> suffix(length);
        vector<int> output(length);
        prefix[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        // Suffix
        suffix[length - 1] = 1;
        for(int j = length - 2; j >= 0; j--){
            suffix[j] = suffix[j+1] * nums[j+1];
        }

        for(int i = 0; i < nums.size(); i++){
            output[i] = prefix[i] * suffix[i];
        }

        return output;
    }
};
