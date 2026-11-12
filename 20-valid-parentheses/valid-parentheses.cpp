class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
                continue;
            }
            if(st.empty()){ return false;}
            char topb = st.top();

            if(s[i]==')' && topb == '('){
                st.pop();
            }
            else if(s[i]=='}' && topb == '{'){
                st.pop();
            }
            else if(s[i]==']' && topb == '['){
                st.pop();
            }
            else 
            return false;      
        } return st.empty();
    }
};