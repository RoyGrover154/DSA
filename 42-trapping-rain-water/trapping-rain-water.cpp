class Solution {
public:
    int trap(vector<int>& height) {

     int n = height.size();  
     if(n==0){
        return 0;
     } 

     vector<int>prefix(n);
     vector<int> suffix(n);

     prefix[0] = height[0];
     for(int i=1; i<=n-1; i++){
        prefix[i] = max(prefix[i-1],height[i]);
     }

    suffix[n-1] = height[n-1];
    for(int j=n-2; j>0; j--){
        suffix[j] = max(suffix[j+1],height[j]);
    }

    int total = 0;

    for(int k=0; k<n; k++){
        int leftmax = prefix[k]; 
        int rightmax = suffix[k];

        if((height[k] < leftmax) && (height[k] < rightmax)){
            total += min(leftmax, rightmax) - height[k];
        }
    }
    return total;

    }
};