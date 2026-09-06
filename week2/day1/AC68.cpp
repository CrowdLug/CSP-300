class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum_full = 1LL * n * (n + 1) / 2;  
        long long sum_actual = 0;
        for (int x : nums) sum_actual += x;
        return (int)(sum_full - sum_actual);
    }
};