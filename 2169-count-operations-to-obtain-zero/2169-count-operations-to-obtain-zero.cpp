class Solution {
public:
    int countOperations(int num1, int num2) {
         int total_op = 0;

          if(num1 == 0 || num2 == 0){
            return 0;
          }  


       while(num1 != num2){

        if(num1 > num2){
            num1 = num1 - num2;
            total_op += 1;
        }else{
            num2 = num2 -num1;
            total_op += 1;
        }
       }
       return total_op +1;
    }
};