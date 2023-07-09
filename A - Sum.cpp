#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	int t;
	cin>>t;
	int a,b,c;
	
	for(int i = 0; i<t; i++){
		cin>>a>>b>>c;
		if(a+b==c){
			cout<<"YES"<<endl;
			continue;
		}
		if(a+c==b){
			cout<<"YES"<<endl;
			continue;
		}
		if(c+b==a){
			cout<<"YES"<<endl;
			continue;
		}
		else cout<<"NO"<<endl;
	}
	
}
