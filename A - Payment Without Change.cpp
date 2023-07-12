#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
	long long a,b,n,s;
	cin>>a>>b>>n>>s;
	long long s1 = a*n;
	long long s2 =b;
	if((s1+s2)>=s){
		if(s%n<=b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else cout<<"NO"<<endl;
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
