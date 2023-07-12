#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    int n,resp;
    cin>>n;
    int v[n];
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    if(n == 2){
        cout<<0<<endl;
        return;
    }
    sort(v + 1, v + n + 1);
    resp = min((v[n-1] - v[1]), v[n] - v[2]);
    cout<<resp<<endl;
}
 
int main(){
    
    f();
    
}
