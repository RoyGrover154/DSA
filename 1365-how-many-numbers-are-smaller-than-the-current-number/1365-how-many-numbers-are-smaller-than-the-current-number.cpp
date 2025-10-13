class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());

        vector<int>result;

        unordered_map<int,int>mp;

       for(int i=0; i<n; i++){
        if(mp.count(sorted[i]) == 0){
            mp[sorted[i]] = i;
        }
       }

        for(int num : nums){
            result.push_back(mp[num]);
        }
       
        return result;
    }
};