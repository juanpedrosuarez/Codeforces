#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    int n,g=0;
    cin>>n;
    for(int i = 0; i<n; i++){    
        long long a,b,n,m;
		cin>>a>>b>>n>>m;
		cout<<min(min(a,b)*n,n/(m+1)*a*m+n%(m+1)*min(a,b))<<endl;
    }
 
}    
 
 
int main(){
    
 
    f();
 
    
}
