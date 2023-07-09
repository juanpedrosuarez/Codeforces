#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    int n,s=0,x=0,d;
    
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        s += v[i];
    }if(s%n!=0){
        cout<<-1<<endl;
    }else{
        d = s/n;
        
        for(int i = 0; i<n; i++){
            if(v[i]>d){
                x++;
            }
        }
        cout<<x<<endl;
    }
    
    
}
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
}
