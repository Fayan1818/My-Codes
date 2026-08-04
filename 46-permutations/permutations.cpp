class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        permutations(res, nums, 0);
        return res;
    }

    void permutations(vector<vector<int>>& res, vector<int>& arr, int idx) {
        if (idx == arr.size()) {
            res.push_back(arr);
            return;
        }

        for (int i = idx; i < arr .size(); i++) {
            swap(arr[idx], arr[i]);
            permutations(res, arr, idx + 1);
            swap(arr[idx], arr[i]);   // Required for backtracking
        }
    }
};