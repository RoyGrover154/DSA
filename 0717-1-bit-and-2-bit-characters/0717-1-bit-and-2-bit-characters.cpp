class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n =  bits.size();
        int count = 0;
  

        for(int i = n-2; i >= 0 && bits[i] == 1; i--){
            count++;
        }

        return count%2 == 0 ? true : false;
    }
};