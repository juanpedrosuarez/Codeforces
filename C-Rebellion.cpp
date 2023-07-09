#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
    
    int n,s=0;
    cin>>n;
    vector<int> v(n);
    vector<int> v2(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        v2[i] = v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; i++){
        if(v[i]!=v2[i]){
            s++;
        }
    }
    cout<<s/2<<endl;
    
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
    
    
}
