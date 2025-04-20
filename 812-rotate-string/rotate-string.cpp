class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length(), m = goal.length();
        if(n!=m){
            return false;
        }

    if((s+s).find(goal) != string::npos){
        return true;
    }  
return false;
    }
};