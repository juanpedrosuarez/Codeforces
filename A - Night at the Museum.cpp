#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
 
	string s;
	cin>>s;
	char c ='a';
	ll rp=0,x1,x2;
	for(int i=0;i<s.size();i++){
   		x1=abs(s[i] - c);
   		x2=26-abs(x1);
   		rp+=min(x1,x2);
   		c = s[i];
	}
	cout<<rp<<endl;
 
}
