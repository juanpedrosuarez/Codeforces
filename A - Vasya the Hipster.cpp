#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int a,b,s1=0,d;
	cin>>a>>b;
	int x=min(a,b);
	d = x;
	a = a-x;
	b = b-x;
	while(a>1){
		a = a-2;
		s1++;
	}
	while(b>1){
		b = b - 2;
		s1++;
	}
	cout<<d<<" "<<s1;
}
