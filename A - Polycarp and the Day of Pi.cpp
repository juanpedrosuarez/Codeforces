#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){    
        int count=0;
        string pi = "314159265358979323846264338327";
        string s;
        cin>>s;
        for(int i = 0; i<s.size(); i++){
            if(pi[i]==s[i]){
                count++;
            }else{
                break;
            }
        }
        cout<<count<<endl;
    }
}    
 
 
int main(){
    
 
    f();
 
    
}
