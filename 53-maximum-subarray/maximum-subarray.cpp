class Solution {
public:
    
      int maxSubArray(vector<int>& nums) {
      int currsum =0, maxsum = INT_MIN;

      for(int val : nums){
      currsum += val;
      maxsum = max(currsum,maxsum);

      if(currsum < 0){
       currsum = 0; 
    }
    }
    return maxsum;
    } 

};



    //   int maxSubArray(vector<int>& nums) {
    //     int maxsum = INT_MIN;
    //     int n = nums.size();
    //     for(int i=0; i<n; i++){
    //         int sum = 0;
    //         for(int j=i; j<n; j++){
    //             sum = sum + nums[j];
    //             maxsum = max(maxsum, sum);
    //         }
    //     }
    //     return maxsum;
    //   }