#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		for(int i = 0; i<n; i++){
			cin>>v[i];
		
		}
		sort(v.begin(),v.end());
		int s;
		s = v[n-1] - v[0];
		cout<<s<<endl;
 
	}
}
