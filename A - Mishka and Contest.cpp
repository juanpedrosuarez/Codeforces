#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,k,s=0,a;
	cin>>n>>k;
	
	vector<int> v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
 
	for(int i = 0; i<n; i++){
		if(v[i]<=k){
			s++;
			v[i] = 0;
		}else{
			break;
		}
	}
	for(int i = 1; i<=n; i++){
		if(v[n-i]<=k and v[n-i]!=0){
			s++;
			v[n-i] = 0;
		}else{
			break;
		}
	}
	cout<<s<<endl;
}
 
int main(){
	
	f();
	
}
