#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int t,n,x=0;
	cin>>t;
	string s;
	while(t--){
		cin>>n;
		vector<int> v(n);
		for(int i = 0; i<n; i++){
			cin>>v[i];
		}	
		sort(v.begin(),v.end());
		for(int i = 0; i<n; i++){
			x += v[i] - v[0];
				
		}	
		cout<<x<<endl;
		x=0;
	}
}
