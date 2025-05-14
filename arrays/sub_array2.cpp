class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            unordered_map<int , int>m;
            int s =0 , a=0;
            m[0]=1;
            for(auto n : nums){
                s = s+n;
                a = a+m[s-k];
                m[s]++;
    
    
            } 
            return a;
            
        }
    };//O(n) time  complexity