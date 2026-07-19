class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0,r = 0;
        int len = 0;
        unordered_set<char> c;
        while(r < s.length()){
            while(c.count(s[r])){
                c.erase(s[l]);
                l++;
            }
            c.insert(s[r]);
            len = max(len, r - l + 1);
            r++;
        }
        return len;  
    }
};
