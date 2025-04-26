class Solution {
public:

int getMinCount(int freq[]) {
    int MinCount = INT_MAX;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) 
            MinCount = min(MinCount, freq[i]);
    }
    return MinCount;
}

int getMaxCount(int freq[]) {
    int MaxCount = 0;
    for (int i = 0; i < 26; i++) {
        MaxCount = max(MaxCount, freq[i]);
    }
    return MaxCount;
}

int beautySum(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        int freq[26] = {0};
        for (int j = i; j < s.length(); j++) { 
            freq[s[j] - 'a']++; 
            int beauty = getMaxCount(freq) - getMinCount(freq);
            sum += beauty;
        }
    }
    return sum;
}
};