#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	long long n,s=0;
	cin>>n;
	
	while(n>1){
		if(n%2==0){
			n = n/2;
			s++;
		}
		else if(n%3==0){
			n = (2*n)/3;
			s++;
		}
		else if(n%5==0){
			n = (4*n)/5;
			s++;
		}else{
			s = -1;
			break;
		}
	}
	cout<<s<<endl;
}
 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		f();
	}
	
}
