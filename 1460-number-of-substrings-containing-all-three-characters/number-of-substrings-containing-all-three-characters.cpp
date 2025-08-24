class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        
        int count = 0;

        vector<int>mp(3,0);

        int left = 0;
        int right = 0;

        while(right < n){
            char ch = s[right];
            mp[ch - 'a']++;
        

        while(mp[0] > 0 && mp[1] > 0 && mp[2] > 0){
            count += n - right;
                mp[s[left] - 'a']--;
                left++;
        }
            right++;
        }
    
    return count;
    }
};