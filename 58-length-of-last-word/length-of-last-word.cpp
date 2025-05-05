class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() -1;

        while(n>=0 && s[n] ==' '){
            n--;
        }

       int length = 0;
    while (n >= 0 && s[n] != ' ') {
        length++;
        n--;
    }

    return length;
}

};