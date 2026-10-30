class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {

        // Sort events by starting day
        sort(events.begin(), events.end());

        priority_queue<int, vector<int>, greater<int>> pq;

        int n = events.size();
        int i = 0;
        int day = 0;
        int count = 0;

        while (i < n || !pq.empty()) {

            // If no available events, jump to next start day
            if (pq.empty()) {
                day = events[i][0];
            }

            // Add all events starting on or before current day
            while (i < n && events[i][0] <= day) {
                pq.push(events[i][1]);
                i++;
            }

            // Remove events that have already expired
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            // Attend the event that ends earliest
            if (!pq.empty()) {
                pq.pop();
                count++;
                day++;
            }
        }

        return count;
    }
};