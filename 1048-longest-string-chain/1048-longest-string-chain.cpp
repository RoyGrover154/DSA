class Solution {
public:
    int n;
    int dp[1001][1001];

    bool ispred(string &prev, string &curr){
        int M = prev.length();
        int N = curr.length();

        if(M > N || N-M != 1){
            return false;
        }

        int i=0 , j=0;

        while(i<M && j<N){
            if(prev[i] == curr[j])
            i++;

        j++;    
        }
        return i == M;
    }

    //// help in sort & arrange words according to word length 
    static bool myfunction(string word1, string word2){
        return word1.length() < word2.length();
    }

    int solve(vector<string> &words, int curr, int prev){
        if(curr == n){
            return 0;
        }

        if(prev != -1 && dp[curr][prev] != -1){
            return dp[curr][prev];
        }

        int taken = 0;
        int not_taken = 0;

        if(prev == -1 || ispred(words[prev], words[curr])){

            taken = 1 + solve(words, curr+1, curr);
        }

        not_taken = solve(words, curr+1, prev);

        if(prev != -1){
            dp[curr][prev] = max(taken, not_taken);
        }

        return max(taken, not_taken);
    }


    int longestStrChain(vector<string>& words) {
        n = words.size();
        memset(dp, -1, sizeof(dp));

        sort(begin(words), end(words), myfunction);

        return solve(words, 0, -1);
    }
};