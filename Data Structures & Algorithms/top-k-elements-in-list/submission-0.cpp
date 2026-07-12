class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<pair<int,int>> result;
        vector<int> output;
        for (int i:nums){
            map[i]++;
        }
        for(auto& it : map){
            result.push_back({it.first, it.second});
        }
        sort(result.begin(), result.end(), [](pair<int,int> a, pair<int,int>b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++){
            output.push_back(result[i].first);
        }
        return output;
    }
};
