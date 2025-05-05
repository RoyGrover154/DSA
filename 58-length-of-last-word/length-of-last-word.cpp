class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() -1;

        while(n>=0 && s[n] ==' '){
            n--;
        }

    int start = n;
    while (start >= 0 && s[start] != ' '){
        start--;
    }
return n - start;
}
};