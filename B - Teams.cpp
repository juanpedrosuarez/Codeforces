
#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	
	int n;
	cin>>n;
	vector<int> v(n);
	
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int s=0,a=0;
	for(int i = 0; i<n-1; i+=2){
		if(v[i]==v[i+1]){
			a=2;
		}else{
			s += v[i+1]-v[i];
		}
	}
	cout<<s<<endl;
	
}
 
 
int main(){
 
	f();
	
}
