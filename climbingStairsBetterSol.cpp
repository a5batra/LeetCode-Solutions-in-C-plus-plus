//
// Created by ankitb on 4/8/21.
//

/* You are climbing a stair case. It takes n steps to reach to the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? */

class Solution {
public:
    int climbStairs(int n) {
        int curr = 1, prev = 1;

        for (int i = 2; i < n + 1; ++i) {
            int temp = curr;
            curr = curr + prev;
            prev = temp;
        }

        return curr;
    }
};

int main() {
    return 0;
}