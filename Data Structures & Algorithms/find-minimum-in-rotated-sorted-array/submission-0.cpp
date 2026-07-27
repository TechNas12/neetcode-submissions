class Solution {
public:
    int findMin(vector<int> &nums) {
        int minElement = INT_MAX;
        for(int it : nums){
            minElement = min(minElement, it);
        }
        return minElement;
    }
};
