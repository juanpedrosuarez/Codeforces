#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	int n;
	cin>>n;
	vector<int> v(n);
	bool b = true;
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i = 0; i<n-1; i++){
		if(abs(v[i+1]-v[i])>1){
			b = false;
			break;
		}
	}
	if(b)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
