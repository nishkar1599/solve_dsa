#include<bits/stdc++.h>
using namespace std;

int solve(int a ,int b){
    if(b == 0) return a;
    return solve(b, a % b);

}

int main(){
    int a, b;
    cin >> a >> b;
    int ans= solve(a,b);
    cout << ans << endl;
    return 0;
}