class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int>LEFT(n);
        vector<int>RIGHT(n);
        stack<int>st;

        //next smallest right
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                RIGHT[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            RIGHT[st.top()] = n;
            st.pop();
        }
            
   //next smallest left

   for(int i=n-1; i>=0; i--){
    while(!st.empty() && heights[st.top()] > heights[i]){
        LEFT[st.top()] = i;
        st.pop();
    }
    st.push(i);
   } 
   while(!st.empty()){
    LEFT[st.top()] = -1;
     st.pop();
   }


int ans = 0;

for(int i=0; i<n; i++){
  ans = max(ans, heights[i] * (RIGHT[i] - LEFT[i] - 1));

}
    return ans;
    }
};