class Solution {
public:
    bool possible(vector<int>& nums, int k, long long mid) {
        int painters = 1;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= mid) {
                sum += nums[i];
            } else {
                painters++;
                sum = nums[i];
            }
        }
        return painters <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (possible(nums, k, mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};