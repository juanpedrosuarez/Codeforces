#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,s=0,a;
	cin>>n;
	vector<int> d;
	vector<int> v(n+2);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	for(int i = 0; i<n; i++){
		if(v[i]==1){
			s++;
		}
		if(v[i+1]<=v[i]){
			a = v[i];
			d.push_back(a);
		}
		
	}cout<<s<<endl;
	for(int i = 0; i<d.size(); i++){cout<<d[i]<<" ";}
	
}
 
int main(){
	
	f();
	
}
