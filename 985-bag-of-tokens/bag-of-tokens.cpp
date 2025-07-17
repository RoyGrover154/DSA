class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power)    {
        int score = 0;
        int m = 0;
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        while(i <= j){
            if(power >= tokens[i]){
                power -= tokens[i++];
                score++;
                m = max(m, score);
            
            }else if(score >= 1 && i<j){
                score--;
                power += tokens[j--];
            
            }else{
                break;
            }
        }
        return m;
    }
};