#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
    long long n,a=0,b=0,s=0;
	cin>>n;
	vector<int> v(n);
	for(int  i = 0; i<n; i++){
		cin>>v[i];
		if(v[i]%2==0){
			a++;
		}else{
			b++;
		}
		s+=v[i];
	}
	if(s%2==1) cout<<"YES"<<endl;
	else{
		if(a>0 and b>0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
