class CommonDivisor{
public:
 int GCD(int a, int b){
    if(b == 0){
        return a;
    }

   return  GCD(b, a%b);
 }
};

class Solution {    
public:
    int findGCD(vector<int>& nums) {
        int a = *min_element(nums.begin(), nums.end());

        int b = *max_element(nums.begin(), nums.end());
        
         CommonDivisor cd;
        return cd.GCD(a, b);
    }
};