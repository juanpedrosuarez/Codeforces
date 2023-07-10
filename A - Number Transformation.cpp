#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
    long long x,y;
    cin>>x>>y;
    if(y%x){
        cout<<0<<" "<<0<<endl;
        return;
    }
    x = y/x;
    cout<<1<<" "<<x<<endl;
	return;
}
 
int main(){
	
    long long t = 1;
    cin>>t;
    while(t--){
        f();
    }
return 0;
}
