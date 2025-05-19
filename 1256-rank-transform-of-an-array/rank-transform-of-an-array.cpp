class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
    
        if(n==0){
            return {};
        }

        vector<pair<int, int>> newarr;
        for(int i=0; i<n; i++){
            newarr.push_back({arr[i],i});
        }
        sort(newarr.begin(), newarr.end());

        vector<int> arr1(n);
        int num = 1;
        arr1[newarr[0].second] = num;

        for(int i=1; i<n; i++){
            if(newarr[i].first != newarr[i-1].first)
                num++;
            arr1[newarr[i].second] = num;   
        }
        return arr1;
    }
};