class Solution {
public:
    long long multiply(long long a, long long b) {
        long long ans = 0;

        while (b > 0) {
            if (b & 1)
            ans += a;
            a += a;
            b >>= 1;
        }
        return ans;
    }

    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long st = 0;
        long long end = a;
        long long ans = 0;

        while (st <= end) {
           long long mid = st + ((end - st) >> 1);
            if (multiply(b, mid) <= a) {
                ans = mid;
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if ((dividend < 0) != (divisor < 0))
            ans = -ans;

        return ans;
    }
};