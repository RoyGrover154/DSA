class Solution {
public:
    static const int MOD = 1e9 + 7;

    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        auto h = buildGaps(hFences, m);
        auto v = buildGaps(vFences, n);

        long long best = 0;
        for (int d : h) {
            if (v.count(d)) best = max(best, (long long)d);
        }

        if (best == 0) return -1;
        return (best * best) % MOD;
    }

    unordered_set<int> buildGaps(vector<int>& fences, int limit) {
        vector<int> pts = fences;
        pts.push_back(1);
        pts.push_back(limit);
        sort(pts.begin(), pts.end());

        unordered_set<int> gaps;
        for (int i = 0; i < pts.size(); i++) {
            for (int j = i + 1; j < pts.size(); j++) {
                gaps.insert(pts[j] - pts[i]);
            }
        }
        return gaps;
    }
};