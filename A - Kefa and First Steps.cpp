#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int n,s(1),m(1);
	cin>>n;
	int v[n];
 
	for(int i = 0; i<n; i++){
		cin>> v[i];
		if(i>0)
			if(v[i]>=v[i-1]){
				s++;
				m = max(m,s);
			}
			else
				s = 1;	
	}
	cout<<m;
	return 0;
}
