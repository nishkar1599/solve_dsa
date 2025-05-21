#include<bits/stdc++.h>
using namespace std;
vector<int>arr1;

int main(){ 
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr1.push_back(x);
    }

    for(int i = 0 ; i<n; i++){
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr1[minIndex]>arr1[j]){
                minIndex = j;
            }
        }
        swap(arr1[i],arr1[minIndex]);
        

    }
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;

}