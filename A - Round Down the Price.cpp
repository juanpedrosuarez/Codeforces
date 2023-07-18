#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
 
 	int n;
	cin>>n;
	int x = 1;
	while(x*10<=n){
		x*=10;
	}
 	cout<<n-x<<endl;
 
}
 
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){		
		f();
	}
	return 0;
}
