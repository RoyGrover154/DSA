class Solution {
public:
    int characterReplacement(string s, int k) {
         int n = s.length();
         int left = 0, right = 0;
         int maxlength = 0;
         int maxfreq = 0;


         vector<int>map(26,0);
        
        while(right < n){
            map[s[right]-'A']++;
            maxfreq = max(maxfreq, map[s[right]-'A']);

            if((right-left+1)- maxfreq > k){
                map[s[left]-'A']--;
                left++;
            }
            maxlength = max(maxlength, right-left+1);
            right++;
        }
         return maxlength;
    }
};