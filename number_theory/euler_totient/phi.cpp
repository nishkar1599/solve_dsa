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