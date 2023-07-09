#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
   int n; cin>>n;  int m; cin>>m;
    vector<int>v;   int e=0;
    for(int i=0;i<n;i++){
     int u; cin>>u;
     v.push_back(u);
    } 
    int c; int x=1;
    sort(v.begin(),v.end()); 
    while(m>0){c=0;
    for(int j=0;j<n;j++){
        if(v[j]==x){
            c=1;
          break;
        }}
    if(c!=1){
        m-=x;
        v.push_back(x);}
  x++;}
  sort(v.begin(),v.end());
   for(int j=0;j<v.size();j++){
       if(v[j]==j+1){
           e++;}}
  if(e==v.size() && m==0){
      cout<<"YES";
  }
  else{
      cout<<"NO";
  }
   cout<<endl;
    
 
    
    
}
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
}
