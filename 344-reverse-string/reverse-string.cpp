class Solution {
public:
 
    void reverseString(vector<char>& s) {
        int n = s.size();
       int i = 0;
       
       while(i<n){
        swap(s[i],s[n-1]);
        i++;
        n--;
       }
       
      
    }
};