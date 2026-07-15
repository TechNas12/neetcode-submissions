class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
    int longest = 0;
    for(int num : set){
        if(!set.contains(num - 1)){
            int current = num;
            int length = 1;
            while(set.contains(current + 1)){
                current++;
                length++;
            }
            longest = max(length, longest);
        }
    }
    return longest;
    }
};
