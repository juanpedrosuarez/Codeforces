#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    int n,k;
    cin>>n>>k;
    if(n%k==0){
        cout<<1<<endl;
    }
    else if(k%n==0){
        cout<<k/n<<endl;
    }
    else if(n>k){
        cout<<2<<endl;
    }
    else{
        cout<<k/n+1<<endl;
    }
    
   
    
}
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
}
