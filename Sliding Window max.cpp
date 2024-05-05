Sliding window maximum
You are given an array of integers nums,
there is a sliding window of size k which is moving from the very left of the array to the very right. 
You can only see the k numbers in the window. Each time the sliding window moves right by one position.

class Solution {
public:
     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> window;

        for (int i = 0; i < nums.size(); ++i) {
            // Remove indices that are outside the current window
            while (!window.empty() && window.front() <= i - k) {
                window.pop_front();
            }

            // Remove indices of elements smaller than the current element
            while (!window.empty() && nums[window.back()] < nums[i]) {
                window.pop_back();
            }

            // Add the current index to the window
            window.push_back(i);

            // Add the maximum element in the current window to the result
            if (i >= k - 1) {
                result.push_back(nums[window.front()]);
            }
        }

        return result;
    }
};
