class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string str = num;
        string out = "";

        for(int i=n-1; i>=0; i--){
            if(num[i] % 2 ==  0) str.pop_back();
            else{
                out = str;
                break;
            }
        }
        return out;      
    }
};