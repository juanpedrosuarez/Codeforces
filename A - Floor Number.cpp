#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    int x,n,s=0;
	cin>>x>>n;
	if(x<=2) cout<<1<<endl;
	else{
		if((x-2)% n !=0){
			cout<<(x-2)/n + 2<<endl;
		}else{
			cout<<(x-2)/n + 1<<endl;
		}
	}
    
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
