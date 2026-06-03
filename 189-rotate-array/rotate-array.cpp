class Solution {
public:
    void rotatepart(vector<int> &nums, int m, int n) {
        while (m <= n) {
            int temp = nums[m];
            nums[m] = nums[n];
            nums[n] = temp;
            m++;
            n--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle cases where k > n

        // Step 1: reverse first n-k elements
        rotatepart(nums, 0, n-k-1);

        // Step 2: reverse last k elements
        rotatepart(nums, n-k, n-1);

        // Step 3: reverse whole array
        rotatepart(nums, 0, n-1);
    }
};
