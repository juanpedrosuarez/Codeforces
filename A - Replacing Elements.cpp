#include <bits/stdc++.h>
 
using namespace std;
 
 
    
void f(){
    
    int n,d;
    cin >> n >> d;
        int arr[n];
        for (int i=0; i<n; i++)
            cin >> arr[i];
            
        sort (arr, arr+n);
        
        if ( arr[n-1] <= d || arr[0]+arr[1] <= d )
            cout <<"YES"<< endl;
        else
            cout <<"NO"<<endl;
 
}    
 
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
        f();
    }
 
    
}
