#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    
        ios_base::sync_with_stdio(false);cout.tie(NULL);
        cin.tie(NULL);
        int n,r=0;
        cin>>n;
        
        int a[n+1],b[n+1];
        b[0]=0;
 
        for(int i=1;i<=n;i++){
                cin>>a[i];
                if(i%2==0){
                        b[i]=b[i-1]+a[i];
                }
                else{
                        b[i]=b[i-1]-a[i];
                }
        }
 
        for(int i=1;i<=n;i++){
                if(b[i-1]-b[n]+b[i]==0){
                        r++;
                }
        }
 
        cout<<r<<endl;
 
}
