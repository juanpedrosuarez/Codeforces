#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	int n,soma=0;
	cin >>n;
	string s;
	for(int i = 0;i<n;i++){
		cin>>s;
		if(s[i]==s[i+1]){
			soma++;
		}
	}
	cout<<soma;
 
 
}
