class Solution {
public:
   bool isfreqSame(int freq1[], int freq2[]){
    for(int i=0; i<26 ; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
   
    bool checkInclusion(string s1, string s2) {
    int arr[26] = {0};

    for(int i=0; i<s1.length(); i++){
        arr[s1[i] -'a']++;
    }

    int windSize = s1.length();

    for(int i=0; i<s2.length();i++){
        int windIdx = 0, idx=i;
        int arr2[26] = {0};
    
        while(windIdx < windSize && idx < s2.length()){
            arr2[s2[idx]-'a']++;
            windIdx++; idx++;
        }
      if(isfreqSame(arr, arr2)){
        return true;
      }
    }
    return false;
    }
};