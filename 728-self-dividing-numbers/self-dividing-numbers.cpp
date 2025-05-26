class Solution {
public:

    bool isSelfdividing(int num , int original){
        if(num == 0) return true;
        int digit = num % 10;
        if(digit == 0 || original % digit != 0) return false;
        return isSelfdividing(num /10, original);
    }
 
    void solve(vector<int> &result, int left, int right){
        if(left > right) return;
       if(isSelfdividing(left ,left)) result.push_back(left);
       solve(result, left+1, right);
    }

    vector<int> selfDividingNumbers(int left, int right) {
       
    vector<int> result;

    solve(result, left, right);

    return result;

    }
};