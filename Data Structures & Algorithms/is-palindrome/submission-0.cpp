class Solution {
public:
    bool isPalindrome(string s) {
        string str = s;
        str.erase(
        remove_if(str.begin(), str.end(),
                [](unsigned char c) { return !isalnum(c); }),
        str.end());
        transform(str.begin(), str.end(), str.begin(),
            [](unsigned char c) { return tolower(c); });
        //Approaching the 2 pointers approach
        int i = 0;
        int j = str.length() - 1;
        while(i <= j){
            if(str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
