class Solution {
public:
    bool isMatch(string s, string p) {

        int n = s.length();
        int m = p.length();

        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        // Empty string matches empty pattern
        dp[0][0] = true;

        // Handle patterns containing only '*'
        for (int j = 1; j <= m; j++) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 1];
            }
        }

        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                // If characters match or pattern has '?'
                if (p[j - 1] == s[i - 1] || p[j - 1] == '?') {
                    dp[i][j] = dp[i - 1][j - 1];
                }

                // If pattern has '*'
                else if (p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
                }

                // Otherwise, no match
                else {
                    dp[i][j] = false;
                }
            }
        }

        return dp[n][m];
    }
};