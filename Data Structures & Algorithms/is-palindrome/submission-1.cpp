class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[j]) == tolower(s[i])){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};
