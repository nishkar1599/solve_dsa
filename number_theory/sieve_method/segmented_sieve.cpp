#include <bits/stdc++.h>
using namespace std;
vector<int> primelist;
void sieve(){
    const int N = 100000;
    bool prime[N+1];
    for(int i = 0 ; i <= N ; i++){
        prime[i] = true; // setting all values to true

    }
    prime[0] = prime[1] = false; // 1 and 0 are not prime
    int sq = sqrt(N);
    for(int i = 2 ; i <= sq ; i++){
        if(prime[i]==true){
            for(int j = i*i ; j <= N; j = j+i ){
                prime[i]=false;

            }


        }

    }
    //fetch all prime
    
    for (int i = 0; i < N+1; i++)
    {
      if(prime[i]){
        primelist.push_back(i);

      }
    }
}

void dummy(int m , int n ){
    int arr[n-m+1];
    for(int i = 0 ; i <n-m+1 ; i++){
        arr[i]= true;

    }
    for(int i = 0 ; i<primelist.size(); i++){
        int p = primelist[i];
        int start = m ;
        if(start % p != 0){
            start = (start/p)*p + p;
        }
        else{
            start = m;
        }
        for(int j = start ; j <= n ; j+=p){
            if(j != p){
                arr[j-m] = false;
                cout<<j<<endl;
            }
        }




    }

}

int main() {
	
	int t ;
    cin>>t;
    sieve();//generates all prime nuber up to 10^6
    while(t--){
        int m ,n;
        cin>>m>> n;
        dummy(m,n);

    }

	return 0;
}