#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,a=0,b=0;
	cin>>n;
	string s;
	cin>>s;	
	for(int i = 0; i<s.size(); i++){
		if(s[i]=='A'){
			a++;
		}
		if(s[i]=='D'){
			b++;
		}
	
	}
	if(a>b){
		cout<<"Anton"<<endl;
	}
	if(a<b){
		cout<<"Danik"<<endl;
	}
	if(a==b){
		cout<<"Friendship"<<endl;
	}
	
}
