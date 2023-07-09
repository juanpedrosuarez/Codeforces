#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    	int a[5];
		for(int i=1;i<=4;i++){
			cin>>a[i];
		}
		int f=a[1],g=a[2],h=a[3],v=a[4];
		sort(a+1,a+5);
		int mn=a[1],mx=a[4];
		if(f==mn&&v==mx||f==mx&&v==mn||g==mn&&h==mx||g==mx&&h==mn){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	
    
    
        
}    
 
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
 
    
}
