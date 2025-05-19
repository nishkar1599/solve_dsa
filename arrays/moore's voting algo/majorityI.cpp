class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int c = 0, m = 0;
            for (auto n : nums) {
                if (c == 0) {
                    m = n;
                    ++c;
                } else if (n != m) {
                    --c;
    
                } else {
                    ++c;
                }
            }
            if (count(nums.begin(), nums.end(), m) > nums.size() / 2) {
                return m;
            }
            else return -1;
        }
    };