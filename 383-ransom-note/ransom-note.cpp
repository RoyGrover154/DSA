class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      
        unordered_map<char ,int> count;

       for(char ch: magazine){
        count[ch]++;
       }
        
        for(char ch : ransomNote){
            if(count[ch] > 0){
                count[ch]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};