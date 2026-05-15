class Solution {
public:
    bool isValid(string s) {
        /*
            thinking: {[()]}
            push only opening ones into the stack

            {[( <- stack
            stack.top() <- (
            compare with hashmap
        */

        stack<char> st;
        unordered_map<char,char> mp;

        mp={{')','('},{']','['},{'}','{'}};
        for(char c:s){
            if(mp.count(c)){
                if(!st.empty() && st.top()==mp[c]){
                    st.pop();
                } else{
                    return false;
                }
            } else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
