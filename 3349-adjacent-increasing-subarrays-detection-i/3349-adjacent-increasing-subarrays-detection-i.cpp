class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int current = 1;
        int prevnum = 0;

        for(int i=1; i<n; i++){
            if(nums[i] > nums[i-1]){
                current++;
            }    
            else{
              prevnum = current;
              current = 1;
               } 

            if(current >= 2*k){
                return true;
            }
            if(min(current, prevnum) >= k){
                return true;
            }
       }
            return false;
        }
};