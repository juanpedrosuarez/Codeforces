#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
    
    int n,s=0,a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        cout<<"First"<<endl;
    }
    else if(a<b){
        cout<<"Second"<<endl;
    }
    else if(a==b){
        if((a+b+c)%2==0){
           cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
 
    }
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
        f();
    }
    
    
    
}
