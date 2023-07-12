#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
int main(){
  ll t;
  cin>>t;
  while(t--){
    int n, v;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>v;
        s.insert(v);
    }
    if((n-s.size())%2==0)cout<<s.size()<<endl;
    else cout<<s.size()-1<<endl;
  }
  return 0;
}
