class Solution {
public:

    bool isfreqSame(int freq1[], int freq2[]){
        for(int j=0;j<26; j++){
            if(freq1[j]!= freq2[j]){
                return false;
            }
        }
        return true;
    }

    bool isAnagram(string s, string t) {
        int n = s.length(), m = t.length();
        if(n != m ){
            return false;
            }
        
    int arr1[26] = {0};

    for(int i=0; i<n;  i++){
        arr1[s[i]-'a']++;
        }
    

    int arr2[26] = {0};

    for(int i=0; i<m; i++){
        arr2[t[i]-'a']++;
    }   

    if(isfreqSame(arr1,arr2)){
        return true;
    }
    return false;
    }
};