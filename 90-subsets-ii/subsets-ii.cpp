class Solution {
public:


    void solve(vector<int> &nums, vector<int> &temp, vector<vector<int>> &result, int idx){

        if(idx == nums.size()){
        result.push_back(temp);
        return;
        }

            temp.push_back(nums[idx]);
             solve(nums, temp, result, idx+1);
             temp.pop_back();


             //skip the duplicate

             while( idx + 1 < nums.size() && nums[idx] == nums[idx+1]){ 
             idx++;
             }
             solve(nums,temp,result, idx+1);
        }
    

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> temp;


        solve(nums, temp, result, 0);
        return result;
    }
};