class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int max_length = 0;
    
        vector<int> arr(128,-1);
        int left = 0;

        for(int right=0; right<n; right++){
            if(arr[s[right]] >= left){
                left = arr[s[right]]+1;
            }

            arr[s[right]] = right;
            max_length = max(max_length, right-left+1);
            }
            return max_length;
            //// TWO POINTER  SLINDING WINDOW CONCEPT  GM //
    }
};