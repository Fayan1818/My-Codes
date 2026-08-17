#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n >= 5) {
        n = n / 5;
        count = count + n;
    }

    cout << count;

    return 0;
}


/*Leetcode - 172

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;

        while (n >= 5) {
            n = n / 5;
            count = count + n;
        }

        return count;
    }
};
*/