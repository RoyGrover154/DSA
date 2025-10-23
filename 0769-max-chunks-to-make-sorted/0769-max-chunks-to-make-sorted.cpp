class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();

        int MaxtillNow = -1;

        int count = 0;

        for(int i=0; i<n; i++){
            MaxtillNow = max(MaxtillNow, arr[i]);

            if(MaxtillNow == i){
                count++;
            }
        }
        return count;
    }
};