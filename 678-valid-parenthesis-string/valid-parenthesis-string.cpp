class Solution {
public:
    bool checkValidString(string s) {
          int n = s.length();
          int low= 0;
          int high = 0;

          for(char c : s){
            if(c == '('){
                low++;
                high++;
            }
            else if(c == ')' ){
                low--;
                high--;
            }
            else{
                low--;
                high++;
            }

            if(high < 0) return false;
            if(low < 0) low = 0;
          }

          return low==0;

    }
    };




          ////stack ///
//           int n = s.length();
//          stack<int>s1;
//          stack<int>s2;

//         for(int i=0; i<n ;i++){
//             if(s[i] == '('){
//             s1.push(i);
//             }
//             else if(s[i] == '*'){
//                 s2.push(i);
//         }
//         else{
//             if(!s1.empty()){
//                 s1.pop();
//             }
//         else if(!s2.empty()){
//             s2.pop();
//         }
//         else{
//             return false;
//         }
//         }

//     }
//         while(!s1.empty() && !s2.empty()){
//             if(s1.top() > s2.top()){
//                 return false;
//             }

//             s1.pop();
//             s2.pop();


//         }
//     return s1.empty();
//     }
// };