// For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

// Example 1:

// Input: str1 = "ABCABC", str2 = "ABC"
// Output: "ABC"
// Example 2:

// Input: str1 = "ABABAB", str2 = "ABAB"
// Output: "AB"
// Example 3:

// Input: str1 = "LEET", str2 = "CODE"
// Output: ""
 

// Constraints:

// 1 <= str1.length, str2.length <= 1000
// str1 and str2 consist of English uppercase letters.
#include<string>
class Solution {
    public:
    
        bool isprefix(string s1 , string s2){
            for(int i = 0 ; i<s2.size(); i++){
                if(s2[i]!=s1[i]){
                    return false;
                }
    
            }
            return true;
        }
    
    
        string findGCD(string s1 , string s2){
            if(isprefix(s1,s2)){
                return gcdOfStrings(s1.substr(s2.length()),s2);
    
            }
            return "";
    
        }
    
        string gcdOfStrings(string str1, string str2) {
            if(str1==str2){
               return str1;
            }
            if(str1.length()>str2.length()){
                return findGCD(str1,str2);
    
            }
            return findGCD(str2,str1);
    
            
        }
    };