#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int y,w,a,b,x1;
	cin>>y>>w;
	
	x1 = max(y,w);
	if(x1==0) cout<<"0/1";
	if(x1==1) cout<<"1/1";
	if(x1==2) cout<<"5/6";
	if(x1==3) cout<<"2/3";
	if(x1==4) cout<<"1/2";
	if(x1==5) cout<<"1/3";
	if(x1==6) cout<<"1/6";
 
}
