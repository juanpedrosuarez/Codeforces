#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n,t,x=0;
    string s;
    cin>>t;
    
    for(int i = 0; i<t; i++){
        cin>>n;
        cin>>s;
        
        sort(s.begin(),s.end());
        for(int j = 0; j<n;j++){
            if(s[j]!=s[j+1]){
                x+=2;
            
            }else x++;
        
        
        }
        cout<<x<<endl;
        x=0;
    }
    
    
    
    
}
