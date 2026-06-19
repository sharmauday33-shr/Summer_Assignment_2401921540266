class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq; // stores indices, values in decreasing order
        vector<int> result;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // remove indices that are out of the current window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // remove indices whose values are smaller than nums[i]
            // they can never be the max while nums[i] is in the window
            while (!dq.empty() && nums[dq.back()] < nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            // front of deque is the max for current window
            if (i >= k - 1) {
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};
