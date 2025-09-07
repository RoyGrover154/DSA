class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<vector<int>>result;
        
        int i = 1;

        sort(intervals.begin(), intervals.end());
        vector<int> tempinterval = intervals[0];


        while(i<n){
           if(intervals[i][0] <= tempinterval[1]){
           tempinterval[1] = max(tempinterval[1],intervals[i][1]);
        }else{
            result.push_back(tempinterval);
            tempinterval = intervals[i];
        }
        i++;
    }
    result.push_back(tempinterval);
    return result;
    }
};