class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     int n = nums1.size();
     int m = nums2.size();

     vector<int> merged;
     for(int i=0; i<n; i++){
        merged.push_back(nums1[i]);
     }

     for(int j=0; j<m; j++){
        merged.push_back(nums2[j]);
     }   

     sort(merged.begin(), merged.end());

     int total_size = merged.size();

    if(total_size % 2 == 0){
        int middle1 = merged[total_size /2 - 1];
        int middle2 = merged[total_size /2];
        return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
    }

    else{
        return static_cast<double>(merged[total_size/2]);
    }

    }
};