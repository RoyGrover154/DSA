class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count=0;
        for(char c : s){
            if(c == '(' && count++ > 0){
                result += c;
            }
              if(c == ')' && count-- > 1){
                result += c;
              }
        }
           
           
            return result;
    }

        
};