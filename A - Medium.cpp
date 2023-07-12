#include <bits/stdc++.h>
    
using namespace std;
 
int main(){
        
       int t,a,b,c;
       cin>>t;
       while(t--){
            cin>>a>>b>>c;
            if(a>b and a<c){
                    cout<<a<<endl;
            }
            else if(c<a and c>b){
                    cout<<c<<endl;
                    
            }else if(b<a and b>c){
                    cout<<b<<endl;
            }else if(b>a and b<c){
                    cout<<b<<endl;
            }else if(c<b and c>a){
                    cout<<c<<endl;
            }else if(a<b and a>c){
                    cout<<a<<endl;
                    
            }else{
                    cout<<-1<<endl;
            }
            
            
       }
        
    }
