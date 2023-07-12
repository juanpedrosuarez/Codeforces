#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
 
	long long b,h,a;
	cin>>b>>h;
    if(b<=h){
		b = b*2;
	}else{
		h = h*2;
	}
	a = max(b,h);
	a = a*a;
	cout<<a<<endl;
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
