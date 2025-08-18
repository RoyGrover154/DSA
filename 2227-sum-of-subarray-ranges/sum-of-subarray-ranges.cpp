class Solution {
public:
    // the Next Smaller Element to the left
    vector<long long> getNSL(vector<int>& arr, int n) {
        vector<long long> result(n);
        stack<long long> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            result[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return result;
    }

    // Next Smaller Element to the right
    vector<long long> getNSR(vector<int>& arr, int n) {
        vector<long long> result(n);
        stack<long long> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            result[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return result;
    }

    // the Next Greater Element to the left
    vector<long long> getNGL(vector<int>& arr, int n) {
        vector<long long> result(n);
        stack<long long> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            result[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return result;
    }

    // the Next Greater Element to the right
    vector<long long> getNGR(vector<int>& arr, int n) {
        vector<long long> result(n);
        stack<long long> st;
        for(int i = n - 1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }
            result[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return result;
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

      
        vector<long long> NSL_max = getNSL(nums, n);
        vector<long long> NSR_max = getNSR(nums, n);
        long long sumMin = 0;

        for(int i = 0; i < n; i++) {
            long long left_count = i - NSL_max[i];
            long long right_count = NSR_max[i] - i;
            long long totalWays = left_count * right_count;
            sumMin += nums[i] * totalWays;
        }

        
        vector<long long> NGL_min = getNGL(nums, n);
        vector<long long> NGR_min = getNGR(nums, n);
        long long sumMax = 0;
        for(int i = 0; i < n; i++) {
            long long left_count = i - NGL_min[i];
            long long right_count = NGR_min[i] - i;
            long long totalWays = left_count * right_count;
            sumMax += nums[i] * totalWays;
        }

        return  sumMax - sumMin;
    }
};