class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     int n = cardPoints.size();
     int maxcount = 0;
     int leftsum = 0;
     int rightsum = 0;

     for(int j=0; j<k; j++){
        leftsum += cardPoints[j];
        maxcount = leftsum;
     }
     
     int idx = n-1;

   for(int i=k-1; i>=0; i--){
    leftsum = leftsum - cardPoints[i];
    rightsum = rightsum + cardPoints[idx];
    idx = idx -1;

    maxcount = max(maxcount, rightsum + leftsum);
   }
   return maxcount;
   }

};