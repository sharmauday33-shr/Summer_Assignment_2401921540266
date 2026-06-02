class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       
        double windowSum = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
        }
        
        double maxAvg = windowSum / k;
        
       
        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i] - nums[i - k];
            maxAvg = max(maxAvg, windowSum / k);
        }
        
        return maxAvg;
    }
};