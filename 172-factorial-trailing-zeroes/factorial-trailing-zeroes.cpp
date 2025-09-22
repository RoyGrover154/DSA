class Solution {
public:

    int solve(int n, int &count){
        if(n<5){
            return count;
        }
        count += n/5;
        return solve(n/5,count);
    }


    int trailingZeroes(int n) {
        if(n<5){
            return 0;
        }
        int count = 0;
       solve(n, count);

       return count;
    }
};