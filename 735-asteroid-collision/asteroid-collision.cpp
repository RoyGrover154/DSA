class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
     
     vector<int> st;

     for(int asteroid : asteroids){

        while(!st.empty() && asteroid < 0 && st.back() > 0){

       if(st.back() < abs(asteroid)){
            st.pop_back();
            continue;
       }
       else if(st.back() == abs(asteroid)){
        st.pop_back();
       }
       asteroid = 0;
        break;
    }
    if(asteroid != 0){
        st.push_back(asteroid);
    }
         
}
    return st;
    }
};