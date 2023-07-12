#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,i=0;
        int y=0;
      
       while(s[i]=='0' and s[n-1-i]=='1' or s[i]=='1' and s[n-i-1]=='0' ){
		i++;
	}
        
        if((n-2*i)>0)cout<<n-2*i<<endl;
        else cout<<0<<endl;
        
}
 
int main(){
    
        ios_base::sync_with_stdio(false);cout.tie(NULL);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
                f();
        } 
}
→Judgement P
