class Solution {
public:
    string encode(const vector<string>& strs) {
        string result;

        for (const string& s : strs) {
            result += to_string(s.length());
            result += '#';
            result += s;
        }

        return result;
    }

    vector<string> decode(const string& s) {
        vector<string> result;
        int i = 0;

        while (i < s.length()) {
            // Read the length
            string nums;
            while (s[i] != '#') {
                nums += s[i];
                i++;
            }

            int length = stoi(nums);

            // Skip '#'
            i++;

            // Extract the word
            result.push_back(s.substr(i, length));

            // Move to the next encoded string
            i += length;
        }

        return result;
    }
};