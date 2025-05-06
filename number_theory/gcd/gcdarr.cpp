#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
    public:
        int gcd(int a, int b) {
            if (b == 0) return a;
            return gcd(b, a % b);
        }
        // Function to find GCD of an array of numbers
    public:
        int findGCD(vector<int>& nums) {
            int max = *max_element(nums.begin(), nums.end());
            int min = *min_element(nums.begin(), nums.end());
            return gcd(max, min);
            
        }
    };