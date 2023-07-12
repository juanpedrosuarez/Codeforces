#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
 
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    
	cout<<l1<<" ";
	if(l1!=l2) cout<<l2<<endl;
	else cout<<l2+1<<endl;
 
}
 
int main(){
	
	int t;
	cin>>t;
	
	while(t--){
   		f();
	}
 
}
