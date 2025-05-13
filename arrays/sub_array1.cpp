class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int ans = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                int count = 0;
                for (int j = i; j < n; j++) {
                    count = count + nums[j];
                    if (count == k) {
                        ans++;
                        
                       
                    }
                }
            }
            return ans;
        }
    };