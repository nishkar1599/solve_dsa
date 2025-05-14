//question states that we have to find the number that appears only once in an array of integers where every other number appears exactly twice.
// The solution uses a map to count the occurrences of each number in the array.
class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            
            int ans;
            map<int,int> count;
            
            for (int i = 0; i < nums.size(); i++) {
                if (count.find(nums[i]) == count.end()) {
                    count.insert({nums[i],1});    
                } else {
                    count[nums[i]]++;
                }
            }
            
            for (auto i : count) {
                if (i.second == 1) {
                    return i.first;
                }
            }
            return 0;
        }
    };
// Time Complexity: O(n)
// Space Complexity: O(n)
