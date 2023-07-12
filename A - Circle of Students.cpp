#include <bits/stdc++.h>
 
using namespace std;
 
 
void f(){
 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=*max_element(a,a+n);
    int mn=*min_element(a,a+n);
    for (int i=1;i<n-1;i++){
        if (abs(a[i]-a[i+1])>1){
 
            if ((a[i]==mx && a[i+1]==mn) || (a[i]==mn && a[i+1]==mx)){
            }
            else {
                cout<<"NO"<<endl;
                return;
            }
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
