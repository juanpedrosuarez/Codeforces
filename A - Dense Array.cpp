#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,ma,mi,s=0;
	cin>>n;
	vector<int> v(n+50);
 
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	for(int i = 0; i<n-1; i++){
		ma = max(v[i],v[i+1]);
		mi = min(v[i],v[i+1]);
		while(ma>2*mi){
			mi<<=1;
			s++;
		}
	}
	cout<<s<<endl;
	
	
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
	
}
