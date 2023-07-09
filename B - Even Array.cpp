#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
   int n,x=0,y=0;
   cin>>n;
   vector<int> v(n);
   for(int i = 0; i<n; i++){
       cin>>v[i];
   }
   for(int i = 0; i<n; i++){
       if(i%2==0){
           if(v[i]%2==1){
               x++;
           }
       }
       if(i%2==1){
           if(v[i]%2==0){
               y++;
           }
       }
   }
   if(x==y) cout<<x<<endl;
   else cout<<"-1"<<endl;
    
}
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
}
