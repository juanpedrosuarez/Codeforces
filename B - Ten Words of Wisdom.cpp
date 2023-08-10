#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
    
    int n,s=0;
    cin>>n;
    int p=0;
    vector<int> v(n);
    vector<int> q(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        cin>>q[i];
    }
 
    for(int i = 0; i<n; i++){
        if(v[i]<=10){
         
            if(q[i]>s){
                s = q[i];
                p = i+1;
            }
        }
    }
    cout<<p<<endl;
 
    
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
    
    
}
