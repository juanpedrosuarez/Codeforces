#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int a,b,c;
	cin>>a>>b>>c;
	
	int delta = b*b -4*a*c;
	int x1,x2,x;
	if(delta == 0){
		x = -b/2*a;
			cout<<x<<endl;
	}
	if(delta<0){
		cout<<"se fodeu"<<endl;
	}
	if(delta>0){
		x1 = -b + pow(delta,1/2);
		x2 = -b - pow(delta,1/2);
		cout<<x1<<" "<<x2<<endl;
	}

}
