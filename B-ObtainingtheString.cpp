#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define pb push_back
void f(){   
	fastio;
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int>ans;
    for(int i=0;i<n;i++){
       if(t[i]!=s[i]){
        int pos=-1;
        for(int j=i+1;j<n;j++){
            if(t[i]==s[j]) { pos=j; break;}
        }
        if(pos==-1) break;
        for(int j=pos-1;j>=i;j--){
            ans.pb(j);
            swap(s[j],s[j+1]);
        }
      }
 
    }
    if(s!=t) cout<<"-1"<<endl;
    else{
        cout<<ans.size()<<endl;
        for(int x:ans) cout<<x+1<<' ';
    }
}
 
 
 
int main(){
	
	f();
	
}
→Judgeme
