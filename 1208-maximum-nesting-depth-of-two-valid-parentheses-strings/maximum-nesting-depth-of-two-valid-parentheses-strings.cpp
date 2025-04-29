class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq){

        vector<int> result;
        int valid = 0;
        
        for(char ch : seq){
            if(ch == '('){
                valid++;
                result.push_back(valid%2);
            }
            else{
                result.push_back(valid % 2);
                 valid--;
            }
        }
        return result;
    }
};