#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,x=1,s=0;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n; i++){
		cin>>v[i];
	}
 
	for(int i = 0; i<n; i++){
		if(v[i]>v[i-1]){
			s++;
		}
		x = max(x,s);
		if(v[i]<=v[i-1]){
			s=1;
		}
	}
	cout<<x<<endl;
}
