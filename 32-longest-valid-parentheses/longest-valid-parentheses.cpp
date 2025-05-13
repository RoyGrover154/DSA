class Solution {
public:
    int longestValidParentheses(string s) {
      
      int n = s.size();

       stack<int> st;
        st.push(-1); //base for length calcultion
        int count = 0;

        for(int i=0; i<n; i++){

         if(s[i] == '('){
            st.push(i);
         }
         else{
              if(st.size() == 1){
                st.top() = i;
              }
              else{
                st.pop();
                count = max(count, i-st.top());
              }
           }

        }
        return count;
    }
};