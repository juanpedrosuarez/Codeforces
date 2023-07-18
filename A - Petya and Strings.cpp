#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	string a,b;
	cin >>a>>b;
	
	for(int i = 0; i<a.size();i++){
			a[i] = towlower(a[i]);
			b[i] = towlower(b[i]);
	
	}if(a==b){
		cout<<0<<endl;
	}if(a<b){
		cout<<-1<<endl;
	}if(b<a){
		cout<<1<<endl;
	}
	return 0;
	
}
