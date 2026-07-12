class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(const auto& it : strs){
            auto word = it;
            sort(word.begin(), word.end());
            map[word].push_back(it);
        }
        vector<vector<string>> result;
        for(const auto& it : map){
            result.push_back(it.second);
        }
        return result;
    }
};
