class Solution {
public:
    int countTriples(int n) {
        
        int count = 0;

        for(int a=1; a<=n; a++){
            for(int b=2; b<=n; b++){
                int sum = a*a + b*b;
                int x = sqrt(sum);

                if(x*x == sum && x <= n){
                    count = count + 1;
                }
            }
        }
        return count;
    }
};