#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
	
	int x,y;
	string s;
	char c;
	cin>>s>>c;
	bool b = true;
	for(int i = 0;i<s.size(); i+=2){
		if(s[i]==c){
			s[i] = s[i];
		}
		else{
			s[i] = '0';
			s[i+1] = '0';
		}
	}
	for(int i = 0;i<s.size(); i+=2){
		if(s[i]!=c){
			b = false;
		}else{
			cout<<"YES"<<endl;
			return;
			
		}
	}
	if(b == false) cout<<"NO"<<endl;
 
}
 
 
int main(){
 
	int t;
	cin>>t;
	while(t--){
		
		f();
	
	}
	
}
