class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int add = 0 ;
            for(auto n : nums){
                add = add^n;
            }
            for(int i = 0 ; i<=nums.size() ; i++){
                add = add^i;
            }
            return add;
            
        }
    };
// Time Complexity : O(n)
// Space Complexity : O(1)
// Problem Statement:
//     Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

// Example 1:

// Input: nums = [3,0,1]

// Output: 2

// Explanation:

// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.