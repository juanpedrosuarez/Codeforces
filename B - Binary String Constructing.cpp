#include <bits/stdc++.h>
   
using namespace std;
 
long long z,m,n,y,o,g; 
 
void f() {
 
	int a,b,x;
	cin>>a>>b>>x;
	int n=a+b;
	char u,v;
	if(a>b) u='0',v='1';
	else u='1',v='0',swap(a,b);
	for(int i=0; i<x/2; i++,a--,b--){
		cout<<u<<v;
	}
	if(x%2==0) {
		while(b--){
			cout<<v;
		}
		while(a--){
			cout<<u;
		}
	}else{
		while(a--){
			cout<<u;
		}
		while(b--){
			cout<<v;
		}
	}
}
 
int main(){
 
    f();
 
}
