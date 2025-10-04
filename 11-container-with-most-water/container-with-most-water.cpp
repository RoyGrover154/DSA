class Solution {
   public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_area = 0;

        int i = 0, j = n-1;

        while(i < j){

            int width = j-i;
            
            int length = min(height[i],height[j]);

            int area = width * length;

            max_area = max(max_area, area);

            if(height[i] > height[j]){
                j--;
            }else{
                i++;
            }

        }

        return max_area;
    }
};