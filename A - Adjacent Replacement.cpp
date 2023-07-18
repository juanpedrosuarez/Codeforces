#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
		if(v[i]%2==0){
			v[i] = v[i]-1;
		}else{
			v[i] = v[i];
		}
	}
		
	for(int i = 0; i<n; i++){cout<<v[i]<<" ";}
}
 
int main(){
	
	f();
	
}
