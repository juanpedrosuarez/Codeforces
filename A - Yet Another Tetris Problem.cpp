#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	int n;
	cin>>n;
	vector<int> v(n);
	bool b1 = false,b2 = false;
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	for(int i = 0; i<=n-1; i++){
		if(v[i]%2==0){
			b1 = true;
		}else{
			b2 = true;
		}
	}
	if(b1 and b2) cout<<"NO"<<endl; 
	else cout<<"YES"<<endl; 
	
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
