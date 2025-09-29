class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i:nums){
            sum+= reconstruct(size_(i),large_digi(i));
        }return sum;
    }
    int large_digi(int n){
        int maxi=0;
        while(n){
            int digi=n%10;
            maxi= max(digi,maxi);
            n/=10;
        }return maxi;
    }
    int size_(int n){
        int count=0;
        while(n){
            count++;
            n/=10;
        }return count;
    }
    int reconstruct(int n,int x){
        int num=0;
         for(int i=1;i<=n;i++){
             num = num * 10 + x;
         }
         return num;
    }
};