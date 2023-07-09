#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
        
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == 'Y' && s[i + 1] != 'e' && i!= n-1){
            cout<<"NO"<<endl;
            return;
        }
        else if(s[i] == 'e' && s[i + 1] != 's' && i!= n-1){
            cout<<"NO"<<endl;
            return;
        }
        else if(s[i] == 's' && s[i+1] != 'Y' && i!=n-1){
            cout<<"NO"<<endl;
            return;
        }
        else if(s[i] != 'Y' && s[i] != 'e' && s[i] != 's'){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
 
}    
 
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    
    }
    
}
