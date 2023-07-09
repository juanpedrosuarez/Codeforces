#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
 
    int t;
	cin>>t;
	
    while(t--){
        int n;
		cin>>n;
        int s=0;
        for(int i = 0; i<2*n; i++){
            int x;
			cin>>x;
            s += x%2;
        }
		if(s==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    
    }
 
}
