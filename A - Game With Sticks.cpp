#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	int n,m,s;
	cin>>n>>m;
	
	if(n>m){
		s = m;
	}else{
		s = n;	
	}
	if(s%2 == 0){
		cout<<"Malvika"<<endl;	
	}else{
		cout<<"Akshat"<<endl;
	}
	
}
