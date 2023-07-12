#include <bits/stdc++.h>
    
using namespace std;
    
void f(){
            int n;
            cin>>n;
            string s;
            cin>>s;
            int x=0;
            int y=0;
          
            for(int i = 0; i<n; i++){
                    
                    if(s[i]=='U'){
                            x+=1;
                    }
                    if(x==1 and y==1){
                            cout<<"YES"<<endl;
                            return;       
                    }
                    if(s[i]=='D'){
                            x-=1;
                    }
                    if(x==1 and y==1){
                            cout<<"YES"<<endl;
                            return;       
                    }
                    if(s[i]=='R'){
                            y+=1;
                    }
                    if(x==1 and y==1){
                            cout<<"YES"<<endl;
                            return;        
                    }
                    
                    if(s[i]=='L'){
                            y-=1;
                    }
                    if(x==1 and y==1){
                            cout<<"YES"<<endl;
                            return;      
                    }
            }
            
            cout<<"NO"<<endl;
            
    }
    
int main(){
        
            ios_base::sync_with_stdio(false);cout.tie(NULL);
            cin.tie(NULL);
            int t;
            cin>>t;
            while(t--){
                    f();
            } 
    }
