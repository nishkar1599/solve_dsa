#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

void pcheck(){
    int x;
    cin >> x;
    if(x==1){
        cout<<"No"<<endl;
        return;

    }
    int sqr = sqrt(x);
    
    for(int i = 2 ; i <= sqr ;i++){
        if(x % i == 0){
            cout<<"NO" << endl;
            return;                     

        }
        
    } 
    cout<<"Yes" << endl;
}



int main(){
    ios_base::sync_with_stdio(false); // for faster input/output
    cin.tie(NULL); // untie cin and cout
    cout.tie(NULL); // untie cout and cin

    int t ;
    cin>>t;
    while(t--){// run test cases t times
        pcheck();
    }
    return 0;

}


