#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    
	int t,n;
	string s;
	cin>>t;
    while(t--){
		cin>>n;
		vector<int> a(n);
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		cin>>s;
		map<int,char> m;
		
		for(int i=0;i<n;i++){
		    m[a[i]]=s[i];
		    
		}
		bool f=true;
		for(int i=0;i<n;i++){
		    
			if(m[a[i]]!=s[i]) f=false;
		}
		cout<<(f?"YES":"NO")<<endl;
	}
	return 0;
}
