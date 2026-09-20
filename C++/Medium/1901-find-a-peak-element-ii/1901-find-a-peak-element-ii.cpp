class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int s = 0, e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            int row = 0;

            for (int i = 1; i < m; i++) {//maximum element in current column
                if (mat[i][mid] > mat[row][mid]) {
                    row = i;
                }
            }

            int left;//for checking on the left
            if (mid > 0) {
                left = mat[row][mid - 1];
            } else {
                left = -1;
            }

            int right;//for checking on the right
            if (mid < n - 1) {
                right = mat[row][mid + 1];
            } else {
                right = -1;
            }

            if (mat[row][mid] > left && mat[row][mid] > right) {
                return {row, mid};
            }
            if (left > mat[row][mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return {-1, -1};
    }
};