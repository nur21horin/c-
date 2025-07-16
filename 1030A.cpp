#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.tie(0);
    vector<int> arr(t);
   for(int i=0;i<t;i++){
    cin>>arr[i];
   }
   bool hasZero=false;
   for(int i=0;i<t;i++){
    if(arr[i]==1){
        cout<<"Hard"<<endl;
        return 0;
    }
    
   }
   cout<<"Easy"<<endl;
//    if(hasZero) cout<<"Easy"<<endl;
//    else cout<<"Hard"<<endl;
//    cout.tie(0);
   return 0;
}