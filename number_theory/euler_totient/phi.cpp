#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int result = n;
    int sq = sqrt(n);
    for(int i = 2;i<=sq;i++){
        if(n%i==0){
            while(n%i==0){
                n = n/i;
            }
        result = result - result/i;    
        }
    }
    if(n>1){
        result = result - result/n;
    }
    return result;
  


}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<< solve(n)<<endl;
        
    }

}
// In number theory, the totient φ of a positive integer n is defined to be the number of positive integers less than or equal to n that are coprime to n.

// Given an integer n (1 ≤ n ≤ 106). Compute the value of the totient φ.

// Input
// First line contains an integer T, the number of test cases. (T ≤ 20000)

// T following lines, each contains an integer n.

// Output
// T lines, one for the result of each test case.

// Example
// Input:
// 5
// 1
// 2
// 3
// 4
// 5

// Output:
// 1
// 1
// 2
// 2
// 4