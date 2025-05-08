class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int maxvalue = *max_element(nums.begin(), nums.end());
  
    vector<int> Newarr(maxvalue+1,0);

    for(int num: nums){
       if(num >= 0){
      Newarr[num]++;
       }
    }
    vector <int> result;

    for(int i=0; i<Newarr.size(); i++){
        if(Newarr[i] > 1){
            result.push_back(i);
        }
    }


    return result;
    }
};