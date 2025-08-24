class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxcount = 0;
        int leftsum = 0;
        int rightsum =0;

        for(int i=0; i<k; i++){
            leftsum = leftsum + cardPoints[i];
            maxcount = leftsum;
        }

        int rightidx = n-1;

        for(int i=k-1; i>=0; i--){
          leftsum = leftsum - cardPoints[i];
          rightsum = rightsum + cardPoints[rightidx];
          rightidx =rightidx - 1;
        
     maxcount = max(maxcount , leftsum + rightsum);
        }
        return maxcount;
    }
};