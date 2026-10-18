#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i])) {
                return true;  // Semicolon added
            }
            seen.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    vector<int> nums = {1, 3, 2, 2};
    Solution obj;

    cout << boolalpha << obj.hasDuplicate(nums) << endl;

    return 0;
}
