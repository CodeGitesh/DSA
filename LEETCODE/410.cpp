class Solution {
public:
    bool isValid(vector<int>& nums, int k, long long mid) {
        long long sum = 0;
        int count = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= mid) {
                sum += nums[i];
            } else {
                count++;
                if (count > k || nums[i] > mid) {
                    return false;
                }
                sum = nums[i];
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        long long sum = 0;
        for (int num : nums) sum += num;

        long long s = 0;
        long long e = sum;
        long long ans = -1;

        while (s <= e) {
            long long mid = s + (e - s) / 2;
            if (isValid(nums, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
};
