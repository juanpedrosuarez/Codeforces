#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	int x,y,n,s,s1,s2;
	cin>>x>>y>>n;
	s = n-y;
	s1 = s/x;
	s2 = x*s1;
	
	cout<<s2+y<<endl;
	
	
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
