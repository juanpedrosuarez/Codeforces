#include <bits\stdc++.h>
 
using namespace std;
 
void f (){
   long long n;
   long long s=0;
   
   cin>>n;
   for(int i = 0; i<n; i++){
     int v;
     cin>>v;
     s += v;
 
   }
   cout<<abs(s)<<endl;
}
 
int main(){
  int t;
  cin>>t;
  while(t--){
    f();
  }
}
