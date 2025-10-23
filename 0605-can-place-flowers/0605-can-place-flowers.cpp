class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();

        int i = 0;

        while(i < m && n > 0){
            if(flowerbed[i] == 1){
                i += 2;
            }else if(i == m-1 || flowerbed[i+1] == 0){
                n--;
                i += 2;
            }else{
             i += 3;
            }

        }

       return n==0;
    }
};