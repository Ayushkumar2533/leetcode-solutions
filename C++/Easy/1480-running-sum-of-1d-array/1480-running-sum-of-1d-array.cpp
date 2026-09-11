class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>Sum(n);
        partial_sum(nums.begin(),nums.end(),Sum.begin());
       return Sum;
    }
};