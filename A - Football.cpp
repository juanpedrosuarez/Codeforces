#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	
	vector<string> v(n);
	string resp;
	for(int i = 0; i<n; i++){
		cin>>v[i];	
	}
 
	sort(v.begin(),v.end());
	resp = v[n/2];
	cout<<resp<<endl;
}
