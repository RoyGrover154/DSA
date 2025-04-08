class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int m = arr.size();
   for(int i=0; i<m; i++){
    if(arr[i] <= k) k++;
    else break;
   }
   return k;
}
};