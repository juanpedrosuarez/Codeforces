#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	int n,soma=0;
	cin>>n;
	string s,s2="";
	cin>>s;
	for(int i = 0; soma<s.size();i++){
		soma = soma + i;
		s2 += s[soma];
	}
 	for(int i = 0; i<s2.size()-1;i++){
		cout<<s2[i];
	}
}
 
int main(){
	
	f();
	
}
