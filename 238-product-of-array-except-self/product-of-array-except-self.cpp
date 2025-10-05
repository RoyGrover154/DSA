class Solution {
public:

    

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> answer(n), prifix(n ,1), suffix(n,1);

        for(int i=1; i<n; i++){
            prifix[i] = prifix[i-1] * nums[i-1];
        }

        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i=0; i<n; i++){

            answer[i] = prifix[i] * suffix[i];

        }

        return answer;
    }
};