// Given an integer array nums, find the subarray with the largest sum, and return its sum.

 

// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int sum=0;
            int maxi = nums[0];//atleast one element is req so initially 1st element
            for(auto n: nums){
    
                sum = sum+n;
                maxi = max(maxi,sum);
                if(sum<0){
                    sum = 0;
                }
    
            }
            return maxi;
            
        }
    };