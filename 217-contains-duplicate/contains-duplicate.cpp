class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(),nums.end());
        return numset.size() < nums.size();
    }
};