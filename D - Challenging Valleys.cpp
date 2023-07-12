#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
	
    int n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            for(int j=i+1;j<n-1;j++){
                if(v[j]>v[j+1]){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            break;
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
