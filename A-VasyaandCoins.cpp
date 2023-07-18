#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	
	int a,b,s=0,xa=0,xb=0;
	cin>>a>>b;
	xb = b*2;
	xa = a;
	if(a==0){
		cout<<"1"<<endl;
	}else{
		s = xb+xa+1;
		cout<<s<<endl;
	}
 
}
 
 
int main(){
 
	int t;
	cin>>t;
	while(t--){
		
		f();
	
	}
	
}
