#include <bits/stdc++.h>
 
using namespace std;
 
void f(){
    
	int n,s=0;
	cin>>n;
	vector<int> v(n);	
	for(int i = 0; i<n; i++){
		cin>>v[i];
		s += v[i];
	}
 
	if(s%n==0) cout<<s/n<<endl;
	else cout<<(s/n)+1<<endl;
	
	
}
 
int main(){
    
	int t;
	cin>>t;
	while(t--){
		f();
	}
 
}
