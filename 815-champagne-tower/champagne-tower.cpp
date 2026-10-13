
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dp[101][101] = {};

        dp[0][0] = poured;

        for (int i = 1; i <= query_row; i++) {
            for (int j = 0; j < i; j++) {
                double left = dp[i - 1][j] - 1.0;

                if (left > 0) {
                    dp[i][j] += left / 2.0;
                    dp[i][j + 1] += left / 2.0;
                }
            }
        }

        return min(1.0, dp[query_row][query_glass]);
    }
};
