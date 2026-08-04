class Solution {
public:
    bool checkValidString(string s) {
        stack<int> left, star;

        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(left.empty() && star.empty()) return false;
                else if(!left.empty()){
                    left.pop();
                }else{
                    star.pop();
                }
            }

            else if(s[i]=='('){
                left.push(i);
            }else{
                star.push(i);
            }
        }

        while(!left.empty() && !star.empty()){
            if(star.top()<left.top()) return false;
            left.pop();
            star.pop();
        }

        return left.empty();
    }
};
