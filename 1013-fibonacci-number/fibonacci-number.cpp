class Solution {
public:
    int fib(int n) {
    
    int n1 = 0;
    int n2 = 1;
    

    if(n<2){
        return n;
    }

    else{
        for(int i=2; i<=n; i++){
            int temp = n2;
            n2 = n2+n1;
            n1= temp;
        }
    }
    return n2;

    }
};