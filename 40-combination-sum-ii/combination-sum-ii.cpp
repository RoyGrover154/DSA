class Solution {
public:

void solve(vector<int>& arr, int target, vector<vector<int>> &result, vector<int> temp,int idx){
    
        if(target == 0){
            result.push_back(temp);
            return;
        }
    



    for(int i=idx; i<arr.size(); i++){
        if(i > idx &&arr[i] == arr[i-1]){
            continue;
    }
        if(arr[i] > target) break;

        temp.push_back(arr[i]);
        solve(arr, target-arr[i], result, temp, i+1);
        temp.pop_back();
    }

}


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(begin(candidates), end(candidates));
    vector<vector<int>> result;
    vector<int> temp;

    solve(candidates, target, result, temp, 0);

    return result; 
    }
};