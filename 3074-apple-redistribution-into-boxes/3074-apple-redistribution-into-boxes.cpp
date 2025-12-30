class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size();

        sort(capacity.begin(), capacity.end());

        int total = accumulate(apple.begin(), apple.end(), 0);

        int totalcap = 0;
        int maxbox = 0;

        for(int i = m-1; i>=0; i--){
            totalcap += capacity[i];
            maxbox++;
            if(totalcap >= total){
                return maxbox;
                break;
            }

        }

        return maxbox;

    }
};