class Solution {
public:
    int atmost(vector<int>& nums, int goal) {
        int n = nums.size();
        int left = 0;
        int maxcount = 0;
        int sum = 0;
    
            if(goal < 0){
                return 0;
            }
            for(int right=0; right<n; right++ ){
                sum += nums[right];

                while(sum > goal){
                        sum = sum - nums[left];
                        left++;
                    }
                     maxcount = maxcount + (right - left + 1);
                }
        return maxcount;
    }

     int numSubarraysWithSum(vector<int>& nums, int goal){
        return atmost(nums,goal) - atmost(nums,goal-1);
     }
};