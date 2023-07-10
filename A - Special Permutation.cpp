#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	
	int n,a;
	cin>>n;
	vector<int> v(n+2);
	
	for(int i = 1; i<=n; i++){
		v[i] = i;
	}
	reverse(v.begin(),v.end());
	for(int i = 1; i<=n; i++){
		if(v[i]==i){
			a = v[i];
			v[i] = v[i+1];
			v[i+1] = a;
		}
	}
	for(int i = 1; i<=n; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
