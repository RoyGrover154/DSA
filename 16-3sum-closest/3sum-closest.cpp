class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int closest = 100000;
    
    for(int i=0; i<=n-3; i++){
        
        int left = i + 1;
        int right = n -1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
        
        if(abs(target - sum) < abs(target - closest))
            closest = sum;


            if(sum < target)
                left++;
            else
                right--;
            
        }

     }
     return closest;
    }
};