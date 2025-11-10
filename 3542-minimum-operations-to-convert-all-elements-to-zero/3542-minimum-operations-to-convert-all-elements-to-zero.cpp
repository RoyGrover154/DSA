class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i = 0;

        int op = 0;

        stack <int> st; ////monotonic stack

        for(int i=0 ; i<nums.size(); i++){

        while(!st.empty() && st.top() > nums[i]){
            st.pop();
        }

        if(nums[i] == 0) continue;
        
        if(st.empty() || st.top() < nums[i]){
            op++;
            st.push(nums[i]);
        }
        
        }

        return op;
    }
};