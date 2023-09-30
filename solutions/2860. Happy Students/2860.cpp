class Solution {
 public:
  int countWays(vector<int>& nums) {
    nums.push_back(-1);
    nums.push_back(INT_MAX);
    sort(nums.begin(), nums.end());

    int ans = 0;

    // i := # of selected nums
    for (int i = 0; i + 1 < nums.size(); ++i)
      if (nums[i] < i && i < nums[i + 1])
        ++ans;

    return ans;
  }
};
