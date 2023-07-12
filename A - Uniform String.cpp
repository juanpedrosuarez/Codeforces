#include <bits/stdc++.h>
 
using namespace std;
 
const std::string s = "abcdefghijklmnopqrstuvwxyz";
 
void f(){
	
	int n,k;
	cin>>n>>k;
	for(int i = 0; i<n; i++){
		cout<<s[i%k];
	}
	cout<<endl;
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
	
}
