#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	string s;
	cin>>s;
	bool b = true;
	sort(s.begin(),s.end());
	for(int i = 1; i<s.size();i++){
		if((s[i-1]+1)!=s[i]){
			b = false;
			
		}
	}
	if(b==true) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
	
}
