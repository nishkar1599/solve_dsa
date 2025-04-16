#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)

void solve(int n){
    
    bool prime[n+1];
    FOR(i,0,n+1){
        prime[i]=true;  // setting all values to true
    }
    prime[0]=prime[1]=false;
    int sq = sqrt(n);
    FOR(i,2,sq){
     if(prime[i]==true){
         FORk(j,i*i,n+1,i){
            prime[j]=false;

        }

    }
   }
   FOR(i,0,n+1) cout<<prime[i]<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); // for faster input/output
    cin.tie(NULL); // untie cin and cout
    cout.tie(NULL); // untie cout and cin

    /*int t ;
    cin>>t;
    while(t--){// run test cases t times
        solve();
    }
    return 0;*/
    
     // 1 and 0 are not prime 
    int N = 25;
    solve(N);
    return 0;




}


