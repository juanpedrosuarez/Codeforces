#include <bits/stdc++.h>
 
using namespace std;
 
 
    
    
 
int main(){
    
    int t;
    cin >>t;
    int a,b,c;
 
    
    while(t--){ 
        cin >>a>>b>>c;
        if(a>b and a<c){
            cout<<a<<endl;
        }
        if (c<a and c>b){
            cout<<c<<endl;
        }
        if (b<a and b>c){
            cout<<b<<endl;
        }
         if (b>a and b<c){
             cout<<b<<endl;
        }
        if (c>a and c<b){
            cout<<c<<endl;
        }
        if (a<b and a>c){
            cout<<a<<endl;
        }
      
      
        
        
    }
    
}
