class Solution {
public:
   
   void solve(vector<vector<int>> &combinations, vector<int> temp, vector<int>& arr,int target, int idx){
    if(idx == arr.size()){
        if(target == 0){
        combinations.push_back(temp);
        }
        return;
    }

    if(arr[idx] <= target){
        temp.push_back(arr[idx]);
        solve(combinations,temp, arr, target-arr[idx], idx);
        temp.pop_back();
    }
    solve(combinations, temp, arr, target, idx+1);

   }


 vector<vector<int>> combinationSum(vector<int>& candidates, int target){


         vector<vector<int>> combinations;
         vector<int> temp;
         

         solve(combinations, temp, candidates, target, 0); 

    return combinations;
    }
};