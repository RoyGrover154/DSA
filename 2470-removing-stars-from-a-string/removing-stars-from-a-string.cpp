class Solution {
public:
    string removeStars(string s) {
        int n = s.size();
        
        stack<char> st;

        for(int i=0; i<n; i++){
            if(s[i] != '*'){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        
        string newstr = "";
        while(!st.empty()){
            newstr += st.top();
            st.pop();
        }
        reverse(newstr.begin(),newstr.end());

        return newstr;
    }
};