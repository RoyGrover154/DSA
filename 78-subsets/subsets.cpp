class Solution {
public:

    void check(vector<vector<int>>&ans, vector<int>nums, int index, vector<int>temp){

        if(index == nums.size()){
            ans.push_back(temp);
            return;
        }

        check(ans, nums, index+1, temp);
        temp.push_back(nums[index]);
        check(ans,nums,index+1,temp);
        temp.pop_back();
            
        }

    


    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>temp;
       check(ans, nums, 0,temp);

       return ans;
    }
};