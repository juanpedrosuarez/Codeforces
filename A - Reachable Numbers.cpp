#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	int n,s;
	cin>>n;
	if(n<10){
		cout<<9;
		return;
	}
	s=9;
	while (n>=10){
		n++;
		while(n%10==0){
			n/=10;
		}
		s++;
	}
	cout<<s;
}
 
int main(){
	
	f();
	
}
