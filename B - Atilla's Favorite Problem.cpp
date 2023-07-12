#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,mv=0,resp;
	cin>>n;
	string s;
	cin>>s;
	for(int i = 0; i<n; i++){
		int resp = s[i]-'a'+1;
		if(resp>mv){
			mv = resp;
		}
	}
	cout<<mv<<endl;
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
}
