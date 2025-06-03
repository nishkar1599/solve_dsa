#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& list,int i , int j){
    int pivot = list[j];
    int l = -1 , r=0;
    while(r<j){
        if(list[r]<pivot){
            ++l;
            swap(list[l],list[r]);


        }
        ++r;

    }
    swap(list[l+1],list[j]);
    int part = l+1;
    return part;


}

void quicksort(vector<int>& list,int i , int j ){
  if(i<j){
    int part = partition(list,i,j);
    quicksort(list,i,part-1);
    quicksort(list,part+1,j);
  }
  else return;



}
int main(){
    vector<int>list={10,2,7,9,4,6,8,3,1,5};
    quicksort(list,0,list.size()-1);
    for(int i =0 ; i<list.size();i++){
        cout<<list[i]<<" ";
    }

    return 0;
}