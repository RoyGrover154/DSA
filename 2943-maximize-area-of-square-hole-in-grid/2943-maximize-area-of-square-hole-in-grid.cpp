class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
       sort(hBars.begin(), hBars.end());
       sort(vBars.begin(), vBars.end());
       int hcur = 1, vcur = 1;
       int hmax = 1, vmax = 1;

        for(int i=1; i<hBars.size(); i++){
             if(hBars[i] == hBars[i-1] + 1){
                hcur++;
             }else{
                hcur = 1;
             }
             hmax = max(hmax, hcur);
        }

        for(int j=1; j< vBars.size(); j++){
            if(vBars[j] == vBars[j-1] + 1){
                vcur++;
            }else{
                vcur = 1;
            }
            vmax = max(vmax, vcur);
        }
        int side = min(hmax, vmax) + 1;

        return side * side;
    }
};