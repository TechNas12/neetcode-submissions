class Solution {
public:
    int characterReplacement(string s, int k) {
        int ch[26] = {};
    int l = 0;
    int result = 0;
    int max_freq = 0;
    for(int r = 0; r < s.length(); r++){
        ch[s[r] - 'A']++;
        max_freq = max(max_freq, ch[s[r]-'A']);
        if((r - l + 1) - max_freq > k){
            ch[s[l] - 'A']--;
            l++;
        }
        result = max(r - l + 1, result);
    
    }
    return result;
    }
};
