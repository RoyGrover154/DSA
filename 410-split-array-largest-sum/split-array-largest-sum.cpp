class Solution {
private:
    // Corrected to return int and proper logic
    int countarray(vector<int>& nums, int m) {
        int count = 1;
        long long curr_sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (curr_sum + nums[i] <= m) {
                curr_sum += nums[i];
            } else {
                count++;
                curr_sum = nums[i];
            }
        }

        return count;
    }

    int findsubarray(vector<int>& arr, int n, int m) {
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int split = countarray(arr, mid);

            if (split > m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return low;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        return findsubarray(nums, nums.size(), k);
    }
};
