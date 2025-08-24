class Solution {
public:
    
    int countfun(vector<int>&nums, int k){
        int n = nums.size();
        int right = 0;
        int left = 0;
        int odd = 0;
        int maxcount = 0;

        while(right < n){
            if(nums[right]%2 ==1){
                odd++;
            }
            while(odd > k){
                if(nums[left] % 2 == 1){
                    odd--;
                }
                left++;
            }
            maxcount += right-left+1;
            right++;
        }
        return maxcount;

    }
    
    
    
    
    int numberOfSubarrays(vector<int>& nums, int k) {
    
    return countfun(nums, k) - countfun(nums, k-1);
    }
};