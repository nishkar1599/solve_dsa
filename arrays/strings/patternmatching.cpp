
class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.size(); i++) {
            int first = i;
            int sec = i;
            int j = 0;
            while (j < needle.size()) {
                if (haystack[sec] == needle[j]) {
                    ++sec;
                    ++j;
                }
                else{
                    break;
                }
                
            }
            if(j==needle.size()){
                return first;
            }
            continue;
            
        }
        return -1; // <-- Added this to handle cases where loop doesn't execute
    }
};
