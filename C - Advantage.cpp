#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,mv=0;
	cin>>n;
	vector<int> v(n),v2(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	v2 = v;
	sort(v.begin(),v.end());
	mv = v[n-1];
	int mv2 = v[n-2];
 
	for(int i = 0; i<n; i++){
		if(mv==v2[i])cout<<mv-mv2<<" ";
		else cout<<v2[i]-mv<<" ";
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
