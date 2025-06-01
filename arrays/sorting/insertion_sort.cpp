#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> list;

    int n ;
    cin >>n;
    
    for(int i =0 ; i<n;i++){
        int m;
        cin>>m;
        list.push_back(m);
        

    }

    for(int i =1 ; i<n ; i++){
        int temp = list[i];
        int j = i-1;
        while(j >= 0 && list[j] > temp){
            list[j+1] = list[j];
            --j;
        }
        list[j+1] = temp;


        
        
    }



    for(int i =0 ; i<n;i++){
       cout<<list[i];
        

    }

    return 0;
}
