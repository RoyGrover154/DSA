class Solution {
public:
    bool isPalindrome(int x) {
        int newnum = x;
      long int ans = 0;
        
        if(x<0){
            return false;
        }

        while(x!=0){        
        int temp = x%10;
         x = x/10;
        ans = ans*10 + temp;
        }
        
           
    return ans == newnum;
    }
};