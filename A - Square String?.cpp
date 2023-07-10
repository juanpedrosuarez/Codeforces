#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
 
	int t;
	cin>>t;
	while(t--){
		
		string s,x1="",x2="";
		cin>>s;
		int t = s.size();
 
 
		for(int i = 0; i<t/2;i++){
			x1+=s[i];
		}
		for(int i = t/2; i<t;i++){
			x2+=s[i];
		}
 
		if(x1==x2){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	
	}
	
}
