class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        string new_string="";

        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]) || (s[i]-'0'>-1 && s[i]-'0'<10)){
                new_string+=tolower(s[i]);
            }
        }

        for(int i=0;i<new_string.size();i++){
            res+=tolower(new_string[new_string.size()-i-1]);
        }

        return res==new_string;
    }
};
