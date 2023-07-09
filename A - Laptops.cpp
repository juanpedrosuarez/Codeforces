#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
	
	int b,n,s=0,p,q;
	cin>>n;
	
	for(int i = 0; i<n;i++){
		cin>>p>>q;
		if(p!=q){
			cout<<"Happy Alex"<<endl;
			return 0;
		}
	}cout<<"Poor Alex"<<endl;
 
 
}
