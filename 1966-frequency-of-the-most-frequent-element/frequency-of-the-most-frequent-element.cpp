class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
       
       sort(nums.begin(),nums.end());
        int n = nums.size();

        int maxfreq = 0;

        int l = 0; 
        long currSum = 0;

        for(int r=0; r< n; r++){

            long target = nums[r];
            currSum += nums[r];

            while( (r-l+1)*target - currSum > k){ // window shrink

                currSum -= nums[l];
                l++;
            }
            maxfreq  = max(maxfreq, r-l+1);

        }
        return maxfreq;
    }
};