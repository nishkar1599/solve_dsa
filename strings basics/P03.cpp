#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    while(n--){
        string name;
        cin >> name;
        cout<<name.size()<<endl;
        if(name.size() > 10){
            cout << name[0] << name.size() - 2 << name[name.size() - 1] << endl;
        } else {
            cout << name << endl;
        }  
    }
    return 0;
}
// The code takes an integer input n, which represents the number of names to be processed.
// For each name, it checks if the length of the name is greater than 10.
// If it is, it prints the first character of the name, followed by the number of characters between the first and last character, and then the last character.
// If the length of the name is 10 or less, it simply prints the name as it is.