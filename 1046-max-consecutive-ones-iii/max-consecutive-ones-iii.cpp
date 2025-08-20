class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right = 0;
        int count_zero = 0;
        int maxlength = 0;

        while(right < nums.size()){
            if(nums[right]==0){
                count_zero++;
            }
        
            while(count_zero > k){
                if(nums[left] == 0){
                    count_zero--;
                   
                }
                 left++;
            }
        
            maxlength = max(maxlength, right-left+1);
            right++;
            }

        return maxlength;
    }
};