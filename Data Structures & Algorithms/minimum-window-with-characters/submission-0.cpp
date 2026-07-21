class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Frequency of characters required
        for (char c : t)
            need[c]++;

        int have = 0;
        int needCount = need.size();

        int left = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            // Character requirement satisfied
            if (need.count(c) && window[c] == need[c])
                have++;

            // Window is valid
            while (have == needCount) {

                // Update answer
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove left character
                char remove = s[left];
                window[remove]--;

                // Window became invalid
                if (need.count(remove) &&
                    window[remove] < need[remove])
                    have--;

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
