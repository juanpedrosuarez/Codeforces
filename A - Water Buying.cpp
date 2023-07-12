#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	
	long long n,a,b,s=0;
	cin>>n>>a>>b;
    if(n==1)cout<<a<<endl;
    else{
    	if(a*2<b) s=a*n;
    	else{
  			s=b*(n/2);
  			if(n%2==1) s+=a;
   		}
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
