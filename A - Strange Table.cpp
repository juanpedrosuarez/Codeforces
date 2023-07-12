#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void f(){
	ll  n,m,x,resp,s1,s2;
	cin>>n>>m>>x;
	s1=(x/n);
 	if(x%n!=0)
        s1++;
       	s2 =(x%n);
    if(s2==0)
 	 	s2=n;
	resp=((s2-1)*m)+s1;
	cout<<resp<<endl;
		
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
		f();
	}
	
}
