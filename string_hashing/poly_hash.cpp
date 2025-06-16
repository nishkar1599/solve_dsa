#include<bits/stdc++.h>
using namespace std;
int MOD = 1e7;
int p = 31; // A prime number greater than the size of the alphabet
int n = 1e6; // Maximum length of the string
vector<long long> powers(n+1,1);
long long polyhash(string &s){
long long ans = 0;
for(int i =0; i<s.size();i++){
 ans =(ans + (s[i] - 'a' + 1) * powers[i]) % MOD;
}
cout<<"The hash value of the string is: "<<ans<<endl;
return ans;
}
int main(){
    string s;
    cout<<"enter a string: ";
    cin>>s;
    // Precompute powers of p
    for(int i = 1; i <= s.size(); i++){
        powers[i] = (powers[i-1] * p) % MOD;
    }

    polyhash(s);
    return 0;

}