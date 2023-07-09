#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    	int n, m,soma=0;
    	cin>>n>>m;
    	
    	string s1,s2;
    	cin>>s1>>s2;
	    reverse(s2.begin(), s2.end());
	    string s3 = s1 + s2;
	    
	   for(int i = 0; i<n+m-1; i++){
	       if(s3[i]==s3[i+1]){
	           soma++;
	       }
	   }
	   if(soma<=1) cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;
    
    
        
}    
 
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
 
    
}
