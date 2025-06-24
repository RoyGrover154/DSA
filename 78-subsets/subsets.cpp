class Solution {
public:
    // vector<vector<int>> ans;

    // void solve(vector<int>& nums, int index, vector<int>& temp){
    //     if(index >= nums.size()){
    //         ans.push_back(temp);
    //         return;
    //     } 
        
    //     temp.push_back(nums[index]);
    //     solve(nums, index+1, temp);
    //     temp.pop_back();
    //     solve(nums, index+1, temp);
    // }
    

    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<int> temp; // store subset;
        
        // solve(nums, 0, temp);

        int n = nums.size();

        int subset = 1 << n;

    vector<vector<int>> ans;

    for(int i=0; i < subset; i++){
        vector<int> list;

        for(int j=0; j<n; j++){
            if(i & (1 << j)){
                list.push_back(nums[j]);
            }
        }
        ans.push_back(list);
    }

    return ans;
        
    }
};