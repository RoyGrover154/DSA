class Solution {
public:

    int winner(vector<bool>friends, int n, int idx, int left,int k){
        if(left == 1){
            for(int i=0; i<n; i++){
                if(friends[i]==0)
                return i;
            }
        }

        // find the position kill
        int kill = (k-1) % left;

        while(kill--){

            idx =(idx+1)%n;
            while(friends[idx] ==1)
            idx = (idx+1)%n; // skip the killed person
            
        }
        friends[idx] =1;
        // find next alive person

        while(friends[idx]==1)
        idx = (idx+1)%n;

       return winner(friends, n, idx, left-1,k);
     }

    int findTheWinner(int n, int k) {

        vector<bool>friends(n,0);

        return winner(friends,n,0,n,k)+1;

    }
};