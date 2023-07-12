#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	int b,h,n,s=1;
	cin>>b>>h>>n;
	while(b%2==0){
		b = b/2;
		s = s*2;
	}
	while(h%2==0){
		h = h/2;
		s = s*2;
	}
	if(s>=n)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
