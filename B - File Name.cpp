#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	
	int n,x=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i = 0; i<n;i++){
		if((s[i]=='x')and (s[i+1]=='x') and (s[i+2]=='x')){
			x++;
		}
	}
	cout<<x<<endl;
	
 
}
