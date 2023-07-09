#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
   int n,k,t=0,s=0,x=0;
   cin>>n>>k;
   t = 240 - k;
   for(int i = 1; i<=n; i++){
       s += 5*i;
       
       if(s>t){
           break;
       }
       x++;
   }
   cout<<x<<endl;
   
    
}
 
int main(){
    
 
   f();
    
}
