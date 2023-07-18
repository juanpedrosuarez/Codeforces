#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,a,b,s=0,c=0;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>a>>b;
		c = c - a;
		c = c + b;
		s=max(s,c);
	}
	cout<<s<<endl;
		
}
