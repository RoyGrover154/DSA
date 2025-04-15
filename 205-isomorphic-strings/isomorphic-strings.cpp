class Solution {
public:
    bool isIsomorphic(string s, string t) {
    unordered_map<char, char> st1, st2;

    for(int i=0; i<s.length();++i){
        if(st1[s[i]] && st1[s[i]] != t[i]){ return false;
    }
        if(st2[t[i]] && st2[t[i]] != s[i]){ return false;
    }
    st1[s[i]]=t[i];
    st2[t[i]]=s[i];
    }
    return true;
    }
};