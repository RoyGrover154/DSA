class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();

        //max heap
        priority_queue<int>p;

        long long result = 0;
        
        for(int i=0; i<n; i++){
            p.push(gifts[i]);
        }


        while(k > 0){
            int gift_taken = sqrt(p.top());
            p.pop();
            p.push(gift_taken);  
            k--; 
    }

        while(!p.empty()){
            result += p.top();
            p.pop();
        }
        return result;
    }
};