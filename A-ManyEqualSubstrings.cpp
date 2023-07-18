#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int p=0;
	for (int i=0; i<n; i++){ 
		if (s.substr(0,i)==s.substr(n-i,i)){ 
			p=i;
		}
	}
	cout<<s;
	for (int i=1; i<k; i++){
		cout << s.substr(p);
	}
}
 
int main(){
	
	f();
	
}
