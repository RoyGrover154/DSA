class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;

        while(low <= high){
            long long  mid = low + (high-low)/2;           long long square = mid*mid; 

            if(square == num){
                return true;
            }

            else if(square < num){
                low= mid+1;
            }
            else{
            high = mid-1;
            }
        
        }
        return false;
    }
};