#include<bits/stdc++.h>
 
 
using namespace std;
 
void f(){
    
    int n,s1=1,s2=0;
 
    cin>>n;
    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
 
    }
   
  for(int i=0;i<n-1;i++){
      if(v[i]*2>=v[i+1])
      s1++;
      else{
          s2=max(s1,s2);
          s1=1;
      }
 
  }
  cout<<max(s1,s2)<<endl;
}
 
int main(){
    
    f();
    
}
