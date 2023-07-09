#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	string s,c1,c2,c3,c4,c5,c;
	cin>>s;
	cin>>c1>>c2>>c3>>c4>>c5;
	c = c1+c2+c3+c4+c5;
	
	for(int i = 0; i<c.size(); i++){
		if(c[i]==s[0] or c[i]==s[1]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	
}
