#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,s=1,ma=1;
	cin>>n;
	
	vector<int> v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
 
	sort(v.begin(),v.end());
	for(int i = 0; i<n; i++){
		if(v[i]==v[i+1]){
			s++;
			ma = max(ma,s);
		}else{
			s=1;
		}
	}cout<<ma<<endl;
	//for(int i = 0; i<n; i++){cout<<v[i]<<" ";}
	
}
 
int main(){
	
	f();
	
}
