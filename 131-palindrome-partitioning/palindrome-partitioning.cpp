class Solution {
public:

   bool  ispalindrome(string s, int start, int end){
        while(start<end){
        if(s[start] != s[end]){
            return false;
        }
            start++;
            end--;
        }
        return true;
    }

    void solve(vector<vector<string>>&ans, vector<string>temp, string s, int index){
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i= index; i<s.size(); i++){
          if (ispalindrome(s,index,i)){

            temp.push_back(s.substr(index,i-index+1));
            solve(ans, temp, s, i+1);
            temp.pop_back();
         }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        solve(ans, temp, s, 0);
        return ans;
    }
};