#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
	int n,h1,h2,h3;
	cin>>n;
	h1 = n/3;
	h2 = n/3;
	h3 = n/3;
	if(n%3==0){
 
		h2++;
		h3--;
	}else if(n%3==1){
		h2+=2;
		h3--;
	}else{
		h1++;
		h2+=2;
		h3--;	
	}
	cout<<h1<<' '<<h2<<' '<<h3<<endl;
	
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		f();
	}
}
