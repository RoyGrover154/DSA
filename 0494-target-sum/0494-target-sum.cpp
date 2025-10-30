class Solution {
public:
    int s;
    int n;

     int solve(vector<int>&nums, int &target, int i, int currsum, vector<vector<int>>&t){    
        
        if(i == n){
            if(currsum == target){
                 return 1;
            }
            else{
                return 0;
            }
        }

        if(t[i][currsum + s] != -1){
            return t[i][currsum + s];
        }

        int plus = solve(nums, target, i+1, currsum + nums[i], t);
        int minus = solve(nums, target, i+1, currsum - nums[i], t);

        return t[i][currsum + s] = plus+minus;

    }

    int findTargetSumWays(vector<int>& nums, int target) {
      n = nums.size();
      s = accumulate(nums.begin(), nums.end(), 0);

      vector<vector<int>>t(n+1, vector<int>(2*s+1,-1));

     return solve(nums, target, 0, 0, t);    
    }
};