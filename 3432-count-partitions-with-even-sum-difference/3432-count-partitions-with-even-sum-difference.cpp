class Solution {
public:
    int countPartitions(vector<int>& nums) {
       
    // This checks whether the sum is odd using bitwise AND.
   //sum & 1 → 1 if sum is odd
   ///sum & 1 → 0 if sum is even
// return (reduce(nums.begin(), nums.end(), 0) & 1) ? 0 : nums.size() - 1;

   
   int sum = accumulate(nums.begin(), nums.end(), 0);

        if(sum % 2 == 0){
            return nums.size() - 1; 
        }
        return 0;
    }
};
