#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
    int count;
	++count;
	int a,b,c;
	cin>>a>>b>>c;
	if(c%gcd(a,b)==0){
		cout << "Case " << count << ":YES";
    }
	else{
		cout << "Case " << count << ":NO";
	}
		
}


int main() {
	
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}

	return 0;
}