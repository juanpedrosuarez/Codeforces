#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	int soma=0;
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	for(int i = 1; i<s.length();i++){
		if(s[i]!=s[i-1]){
			soma++;
		}
	}
	if(soma%2 == 0){
		cout<<"IGNORE HIM!"<<endl; 
	}else{
		cout<<"CHAT WITH HER!"<<endl; 
	}
	
}
