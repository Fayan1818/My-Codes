class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans(n, 0);

        stack<int> st;

        for (int i = 0; i < n; i++) {

            // Find previous days with lower temperatures
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {

                int prev = st.top();
                st.pop();

                // Calculate days waited
                ans[prev] = i - prev;
            }

            // Store current index
            st.push(i);
        }

        return ans;
    }
};