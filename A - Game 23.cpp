#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
 
	int n,m,s=0;
	cin>>n>>m;
    if(m%n){
        cout<<-1<<endl;
		return;
    }
	m = m/n;
	while(m%3==0){
		s++;
		m = m/3;
	}
	while(m%2==0){
		s++;
		m = m/2;
	}
	if(m==1)cout<<s<<endl;
	else cout<<-1<<endl;
	
}
 
int main(){
	
	f();
	
}
