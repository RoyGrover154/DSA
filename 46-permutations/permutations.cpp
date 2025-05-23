class Solution {

void find(vector<int>& nums,int index,vector<vector<int>>&ans)
{
    if(nums.size() == index)
    {
        ans.push_back(nums);
        return;
    }

    for(int i=index; i<nums.size(); i++)
    {
        swap(nums[i],nums[index]);
        find(nums,index+1,ans);
        swap(nums[i],nums[index]);

    }
}



public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        

        find(nums,0,ans);
        return ans;


    }
};