class Solution {
public:
    int mod = 1e9 + 7;
    int numberOfWays(string corridor) {
        int n = corridor.size();

        vector<int> seats_pos;

        for(int i=0; i<n; i++){
            if(corridor[i] == 'S'){
                seats_pos.push_back(i);
            }
        }

        if(seats_pos.size() % 2 != 0 || seats_pos.size() == 0){
            return 0;
        }


        
         long long result = 1;
        int prev  = seats_pos[1]; 
        
        for (int i = 2; i < seats_pos.size(); i += 2) {
            int length = seats_pos[i] - prev;
            result  = (result * length) % mod;
            
            prev = seats_pos[i + 1];
        }
        
        return result;
    }
};