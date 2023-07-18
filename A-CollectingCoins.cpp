#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
 
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int m = max(a,max(b,c));
    n -= 3*m - (a+b+c);
    if(n<0){
        cout<<"NO"<<endl;
        return;
    }
    if(n%3 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}
 
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
        f();
    }
}
