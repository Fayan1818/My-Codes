#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int nums[n];

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // XOR of the two unique numbers
    int xorAll = 0;

    for(int i = 0; i < n; i++) {
        xorAll = xorAll ^ nums[i];
    }

    // Get one bit where the two unique numbers are different
    int bit = xorAll & (-xorAll);

    // These will store the two unique numbers
    int ans1 = 0;
    int ans2 = 0;

    // Divide numbers into two groups using the different bit
    for(int i = 0; i < n; i++) {

        if(nums[i] & bit) {
            ans1 = ans1 ^ nums[i];
        }
        else {
            ans2 = ans2 ^ nums[i];
        }
    }

    cout << ans1 << " " << ans2;

    return 0;
}