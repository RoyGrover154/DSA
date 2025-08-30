class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
       
        // MaX Heap

        priority_queue<int>Q;

        for(int i=0; i<n ;i++){
            Q.push(stones[i]);
        }

        while(Q.size() > 1){
          int weight = Q.top();
          Q.pop();
          weight -= Q.top();
          Q.pop();

            Q.push(weight);
           
        }
        return  Q.top();
    }
};