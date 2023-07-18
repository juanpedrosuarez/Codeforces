#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,s=0,m;
	cin>> n;
	vector<int> v(n);
	for(int i = 0; i<n; i++){
		cin>> m;
		for(int i = 0; i<m; i++){
			cin>> v[i];
		}
		bool f = false;
		for(int i = 1; i<m -1; i++){
			if(v[i]!= v[i+1] and v[i]!= v[i-1]){
				s = i + 1;
				cout<<s<<endl;
				f = true;
				break;
			}
		}
		if(!f){
			if(v[0]!=v[1]) cout<<1<<endl;
			else cout<<m<<endl;
		}
	}
 
	
}
