class Solution {
public:
    string removeKdigits(string num, int k) {

       stack<char>st;

     for(int i=0; i< num.length(); i++){ 
            while(st.size()>0 && st.top() > num[i] && k>0){
                st.pop();
                k--;
            }
        if(st.size()>0 || num[i] != '0'){
            st.push(num[i]);
        } 
     }

 while(!st.empty() && k > 0){
    st.pop();
    k--;
 }    

if(st.empty()){
    return "0";
}

    string result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());
    
    return result;
    }

};